#ifndef Flooding_H
#define Flooding_H

#include <omnetpp.h>
#include <map>
#include "UDPControlInfo_m.h"
#include "UDPSocket.h"

class Flooding : public cSimpleModule {
	public:
		Flooding() {}
		~Flooding();
		virtual int numInitStages() const {
			return std::max(4, cSimpleModule::numInitStages());
		}
		virtual void initialize(int);
		virtual void finish();
		virtual void receiveChangeNotification(int category, const cPolymorphic *details);
		virtual void handleMessage(cMessage * msg);

	protected:
		void setupLowerLayer();
		virtual void handleSelfMsg(cMessage* apMsg);
		virtual void handleLowerMsg(cMessage* apMsg);
		virtual void handlePositionUpdate();
		virtual void sendMessage();

		bool debug;

		bool triggeredFlooding;
};

#endif
