#ifndef __FLOODING_H
#define __FLOODING_H

#include <omnetpp.h>

class Flooding : public cSimpleModule
{
	public:
		Flooding();
	    virtual ~Flooding();
	protected:
	    void initialize();
	    void handleMessage(cMessage *msg);

};

#endif
