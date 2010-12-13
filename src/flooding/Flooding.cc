/*
 *  Copyright (C) 2010 Christoph Sommer <christoph.sommer@informatik.uni-erlangen.de>
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program; if not, write to the Free Software
 *  Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 */

#include <algorithm>
#include <numeric>

#include "Flooding.h"

Define_Module(Flooding);

Flooding::~Flooding() {
}

void Flooding::initialize(int aStage) {
	// Just setup all the stuff

	cSimpleModule::initialize(aStage);

	if (0 == aStage) {
		debug = par("debug");

		traci = TraCIMobilityAccess().get();
		triggeredFlooding = false;

		NotificationBoard* nb = NotificationBoardAccess().get();
		nb->subscribe(this, NF_HOSTPOSITION_UPDATED);

		setupLowerLayer();
	}
	status = BACKBONE_NOT_MEMBER;
	WATCH(numSent);
}

void Flooding::setupLowerLayer() {
	// Setup UDP _at the moment_. We have to move to MAC layer later.
	cMessage *msg = new cMessage("UDP_C_BIND", UDP_C_BIND);
	UDPControlInfo *ctrl = new UDPControlInfo();
	ctrl->setSrcPort(12345);
	ctrl->setSockId(UDPSocket::generateSocketId());
	msg->setControlInfo(ctrl);
	send(msg, "udp$o");
}

void Flooding::finish() {
	// This function is called by OMNeT++ at the end of the simulation.
	EV << "Sent:     " << numSent << endl;
	EV << "Received: " << numReceived << endl;
	EV << "Hop count, min:    " << hopCountStats.getMin() << endl;
	EV << "Hop count, max:    " << hopCountStats.getMax() << endl;
	EV << "Hop count, mean:   " << hopCountStats.getMean() << endl;
	EV << "Hop count, stddev: " << hopCountStats.getStddev() << endl;

	recordScalar("#sent", numSent);
	recordScalar("#received", numReceived);

    hopCountStats.recordAs("hop count");
}

void Flooding::receiveChangeNotification(int category, const cPolymorphic *details) {
	// Here we have to decide wheter to create the backbone or not
	Enter_Method("receiveChangeNotification()");

	if (category == NF_HOSTPOSITION_UPDATED) {
		// ATM, we try to create the backbone every time we move. Funny right?
		handlePositionUpdate();
	} else {
		error("should only be subscribed to NF_HOSTPOSITION_UPDATED, but received notification of category %d", category);
	}
}

void Flooding::handleMessage(cMessage* apMsg) {
	// Handle it!
	hopCountVector.record(apMsg->getArrivalTime() - apMsg->getCreationTime());
	hopCountStats.collect(apMsg->getArrivalTime() - apMsg->getCreationTime());

	ev << "RECEIVED MESSAGE!!!!!" << endl;

	DBA_MAC *packet = check_and_cast<DBA_MAC*>(apMsg->getObject(BACKBONE_MESSAGE_NAME));

	ev << "Received message from " << packet->getId() << ", containing " << packet->getDBA_message();

	if (apMsg->isSelfMessage()) {
		handleSelfMsg(apMsg);
	} else {
		handleLowerMsg(apMsg);
	}
}

void Flooding::handleSelfMsg(cMessage* apMsg) {
	// Here we must wake up when receiving a message and computing the fit factor.
}

void Flooding::handleLowerMsg(cMessage* apMsg) {
	// Decide the backbone maintenance
	if (cPacket* m = dynamic_cast<cPacket*>(apMsg)) {
		sendMessage();
	}

	delete apMsg;
}

void Flooding::handlePositionUpdate() {
	// We're moving. Maybe here we can add all the speed-decision related stuff.
	DBA_MAC *msg = new DBA_MAC();
	msg->setDBA_message(BACKBONE_CREATION);

	msg->setId(this->getId());

//	if ((traci->getPosition().x < 7350) && (!triggeredFlooding)) {
//		triggeredFlooding = true;
	sendBackboneMessage(msg);
//	}
}

void Flooding::sendMessage() {
	// Send a message. Maybe a DBA-MAC_msg
	cPacket* newMessage = new cPacket();

	newMessage->setKind(UDP_C_DATA);
	UDPControlInfo *ctrl = new UDPControlInfo();
	ctrl->setSrcPort(12345);
	ctrl->setDestAddr(IPAddress::ALL_HOSTS_MCAST);
	ctrl->setDestPort(12345);
	delete(newMessage->removeControlInfo());
	newMessage->setControlInfo(ctrl);

	sendDelayed(newMessage, 0.010, "udp$o");
}

void Flooding::sendBackboneMessage(DBA_MAC *msg) {
	// Send a message. Maybe a DBA-MAC_msg
	status = BACKBONE_MEMBER; // Put myself as a backbone member

	cPacket* newPacket = new cPacket();
	newPacket->setName(BACKBONE_MESSAGE_NAME);
	newPacket->encapsulate(msg);

	if (msg->getDBA_message() == BACKBONE_CREATION) {
		ev << "BACKBONE EVENT: Backbone creation" << endl;
	} else if (msg->getDBA_message() == BACKBONE_MAINTENANCE) {
		ev << "BACKBONE EVENT: Backbone maintenance" << endl;
	}

	newPacket->setKind(UDP_C_DATA);
	UDPControlInfo *ctrl = new UDPControlInfo();
	ctrl->setSrcPort(12345);
	ctrl->setDestAddr(IPAddress::ALLONES_ADDRESS);
	ctrl->setDestPort(12345);
	delete(newPacket->removeControlInfo());
	newPacket->setControlInfo(ctrl);

	sendDelayed(newPacket, 0.010, "udp$o");
}
