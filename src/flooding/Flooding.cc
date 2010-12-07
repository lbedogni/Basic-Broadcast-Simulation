#include <omnetpp.h>

class Flooding : public cSimpleModule
{
	public:
		Flooding();
	    virtual ~Flooding();
	protected:
	    virtual void initialize();
	    virtual void handleMessage(cMessage *msg);

};

Flooding::Flooding() {}

Flooding::~Flooding() {}

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
