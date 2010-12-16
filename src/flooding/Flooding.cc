#include <omnetpp.h>
#include <UPDControlInfo_m.h>


#include <omnetpp.h>
#include "UDPAppBase.h"
#include "UDPSocket.h"
#include "UDPControlInfo_m.h"

void Flooding::bindToPort(int port)
{
    EV << "Binding to UDP port " << port << endl;

    // TODO UDPAppBase should be ported to use UDPSocket sometime, but for now
    // we just manage the UDP socket by hand...
    cMessage *msg = new cMessage("UDP_C_BIND", UDP_C_BIND);
    UDPControlInfo *ctrl = new UDPControlInfo();
    ctrl->setSrcPort(port);
    ctrl->setSockId(UDPSocket::generateSocketId());
    msg->setControlInfo(ctrl);
    send(msg, "udpOut");
}

void Flooding::sendToUDP(cPacket *msg, int srcPort, const IPvXAddress& destAddr, int destPort)
{
    // send message to UDP, with the appropriate control info attached
    msg->setKind(UDP_C_DATA);

    UDPControlInfo *ctrl = new UDPControlInfo();
    ctrl->setSrcPort(srcPort);
    ctrl->setDestAddr(destAddr);
    ctrl->setDestPort(destPort);
    msg->setControlInfo(ctrl);

    EV << "Sending packet: ";
    printPacket(msg);

    send(msg, "udpOut");
}

void Flooding::printPacket(cPacket *msg)
{
    UDPControlInfo *ctrl = check_and_cast<UDPControlInfo *>(msg->getControlInfo());

    IPvXAddress srcAddr = ctrl->getSrcAddr();
    IPvXAddress destAddr = ctrl->getDestAddr();
    int srcPort = ctrl->getSrcPort();
    int destPort = ctrl->getDestPort();

    ev  << msg << "  (" << msg->getByteLength() << " bytes)" << endl;
    ev  << srcAddr << " :" << srcPort << " --> " << destAddr << ":" << destPort << endl;
}
