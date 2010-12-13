#ifndef Flooding_H
#define Flooding_H

#include <omnetpp.h>
#include <map>
#include "UDPControlInfo_m.h"
#include "UDPSocket.h"
#include "NotificationBoard.h"
#include "TraCIMobility.h"

class Flooding : public BasicModule {
	private:
		long numSent;
		long numReceived;
		cLongHistogram hopCountStats;
		cOutVector hopCountVector;
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

		TraCIMobility* traci;

		bool triggeredFlooding;
};

#endif
