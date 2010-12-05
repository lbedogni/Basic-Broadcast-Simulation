#include "Flooding.h"

Define_Module( Flooding );

void Flooding::initialize()
{
	ev << "Flooding.initialize();";
	cMessage *msg = new cMessage("Message");
	send(msg, "lowerOUT");
}

void Flooding::handleMessage(cMessage *msg) {
    send(msg, "lowerOUT");
}
