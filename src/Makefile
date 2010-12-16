#
# OMNeT++/OMNEST Makefile for Basic-Broadcast-Simulation
#
# This file was generated with the command:
#  opp_makemake -f --deep -I/home/bedo/omnetpp/samples/inet-sommer/src/linklayer/mfcore -I../../inet-sommer/src/networklayer/ipv4 -I../../inet-sommer/src/networklayer/ted -I../../inet-sommer/src/transport/tcp -I../../inet-sommer/src/transport/contract -I../../inet-sommer/src/linklayer/contract -I../../inet-sommer/src/transport/sctp -I../../inet-sommer/src/networklayer/contract -I../../inet-sommer/src/applications/pingapp -I../../inet-sommer/src/transport/udp -I../../inet-sommer/src/networklayer/ipv6 -I../../inet-sommer/src/util -I../../inet-sommer/src/world -I../../inet-sommer/src/networklayer/arp -I../../inet-sommer/src/networklayer/rsvp_te -I../../inet-sommer/src/networklayer/icmpv6 -I../../inet-sommer/src/networklayer/ldp -I../../inet-sommer/src/networklayer/mpls -I../../inet-sommer/src/base -I../../inet-sommer/src/networklayer/common -I../../inet-sommer/src/util/headerserializers -I../../inet-sommer/src/applications/udpapp -I../../inet-sommer/src/linklayer/ethernet -L/home/bedo/omnetpp/samples/inet-sommer/src/linklayer/mfcore -L../../inet-sommer/out/$(CONFIGNAME)/src -linet -KINET_SOMMER_PROJ=../../inet-sommer
#

# Name of target to be created (-o option)
TARGET = Basic-Broadcast-Simulation$(EXE_SUFFIX)

# User interface (uncomment one) (-u option)
USERIF_LIBS = $(ALL_ENV_LIBS) # that is, $(TKENV_LIBS) $(CMDENV_LIBS)
#USERIF_LIBS = $(CMDENV_LIBS)
#USERIF_LIBS = $(TKENV_LIBS)

# C++ include paths (with -I)
INCLUDE_PATH = \
    -I$(INET_SOMMER_PROJ)/src/linklayer/mfcore \
    -I../../inet-sommer/src/networklayer/ipv4 \
    -I../../inet-sommer/src/networklayer/ted \
    -I../../inet-sommer/src/transport/tcp \
    -I../../inet-sommer/src/transport/contract \
    -I../../inet-sommer/src/linklayer/contract \
    -I../../inet-sommer/src/transport/sctp \
    -I../../inet-sommer/src/networklayer/contract \
    -I../../inet-sommer/src/applications/pingapp \
    -I../../inet-sommer/src/transport/udp \
    -I../../inet-sommer/src/networklayer/ipv6 \
    -I../../inet-sommer/src/util \
    -I../../inet-sommer/src/world \
    -I../../inet-sommer/src/networklayer/arp \
    -I../../inet-sommer/src/networklayer/rsvp_te \
    -I../../inet-sommer/src/networklayer/icmpv6 \
    -I../../inet-sommer/src/networklayer/ldp \
    -I../../inet-sommer/src/networklayer/mpls \
    -I../../inet-sommer/src/base \
    -I../../inet-sommer/src/networklayer/common \
    -I../../inet-sommer/src/util/headerserializers \
    -I../../inet-sommer/src/applications/udpapp \
    -I../../inet-sommer/src/linklayer/ethernet \
    -I. \
    -Idbamac \
    -Idbamac/ieee80211 \
    -Idbamac/ieee80211/mac \
    -Idbamac/ieee80211/mgmt \
    -Idbamac/mf80211 \
    -Idbamac/mf80211/macLayer \
    -Idbamac/mf80211/phyLayer \
    -Idbamac/mf80211/phyLayer/decider \
    -Idbamac/mf80211/phyLayer/snrEval \
    -Iflooding

# Additional object and library files to link with
EXTRA_OBJS =

# Additional libraries (-L, -l options)
LIBS = -L$(INET_SOMMER_PROJ)/src/linklayer/mfcore -L../../inet-sommer/out/$(CONFIGNAME)/src  -linet
LIBS += -Wl,-rpath,`abspath $(INET_SOMMER_PROJ)/src/linklayer/mfcore` -Wl,-rpath,`abspath ../../inet-sommer/out/$(CONFIGNAME)/src`

# Output directory
PROJECT_OUTPUT_DIR = ../out
PROJECTRELATIVE_PATH = src
O = $(PROJECT_OUTPUT_DIR)/$(CONFIGNAME)/$(PROJECTRELATIVE_PATH)

# Object files for local .cc and .msg files
OBJS = \
    $O/dbamac/ieee80211/mac/Ieee80211Mac.o \
    $O/dbamac/ieee80211/mgmt/Ieee80211MgmtBase.o \
    $O/dbamac/ieee80211/mgmt/Ieee80211AgentSTA.o \
    $O/dbamac/ieee80211/mgmt/Ieee80211MgmtAP.o \
    $O/dbamac/ieee80211/mgmt/Ieee80211MgmtSTA.o \
    $O/dbamac/ieee80211/mgmt/Ieee80211MgmtAPBase.o \
    $O/dbamac/ieee80211/mgmt/Ieee80211MgmtSTASimplified.o \
    $O/dbamac/ieee80211/mgmt/Ieee80211MgmtAPSimplified.o \
    $O/dbamac/ieee80211/mgmt/Ieee80211MgmtAdhoc.o \
    $O/dbamac/mf80211/macLayer/Mac80211.o \
    $O/dbamac/mf80211/macLayer/CSMAMacLayer.o \
    $O/dbamac/mf80211/phyLayer/decider/Decider80211.o \
    $O/dbamac/mf80211/phyLayer/decider/SnrDecider.o \
    $O/dbamac/mf80211/phyLayer/decider/ErrAndCollDecider.o \
    $O/dbamac/mf80211/phyLayer/snrEval/SnrEval80211.o \
    $O/dbamac/mf80211/phyLayer/snrEval/GilbertElliotSnr.o \
    $O/dbamac/mf80211/phyLayer/snrEval/SnrEval.o \
    $O/flooding/Flooding.o \
    $O/dbamac/ieee80211/mac/Ieee80211Frame_m.o \
    $O/dbamac/ieee80211/mgmt/Ieee80211Primitives_m.o \
    $O/dbamac/ieee80211/mgmt/Ieee80211MgmtFrames_m.o \
    $O/dbamac/mf80211/macLayer/Mac80211Pkt_m.o \
    $O/dbamac/mf80211/macLayer/MacPkt_m.o

# Message files
MSGFILES = \
    dbamac/ieee80211/mac/Ieee80211Frame.msg \
    dbamac/ieee80211/mgmt/Ieee80211Primitives.msg \
    dbamac/ieee80211/mgmt/Ieee80211MgmtFrames.msg \
    dbamac/mf80211/macLayer/Mac80211Pkt.msg \
    dbamac/mf80211/macLayer/MacPkt.msg

# Other makefile variables (-K)
INET_SOMMER_PROJ=../../inet-sommer

#------------------------------------------------------------------------------

# Pull in OMNeT++ configuration (Makefile.inc or configuser.vc)

ifneq ("$(OMNETPP_CONFIGFILE)","")
CONFIGFILE = $(OMNETPP_CONFIGFILE)
else
ifneq ("$(OMNETPP_ROOT)","")
CONFIGFILE = $(OMNETPP_ROOT)/Makefile.inc
else
CONFIGFILE = $(shell opp_configfilepath)
endif
endif

ifeq ("$(wildcard $(CONFIGFILE))","")
$(error Config file '$(CONFIGFILE)' does not exist -- add the OMNeT++ bin directory to the path so that opp_configfilepath can be found, or set the OMNETPP_CONFIGFILE variable to point to Makefile.inc)
endif

include $(CONFIGFILE)

# Simulation kernel and user interface libraries
OMNETPP_LIB_SUBDIR = $(OMNETPP_LIB_DIR)/$(TOOLCHAIN_NAME)
OMNETPP_LIBS = -L"$(OMNETPP_LIB_SUBDIR)" -L"$(OMNETPP_LIB_DIR)" $(USERIF_LIBS) $(KERNEL_LIBS) $(SYS_LIBS)

COPTS = $(CFLAGS)  $(INCLUDE_PATH) -I$(OMNETPP_INCL_DIR)
MSGCOPTS = $(INCLUDE_PATH)

#------------------------------------------------------------------------------
# User-supplied makefile fragment(s)
# >>>
# <<<
#------------------------------------------------------------------------------

# Main target
all: $(TARGET)

$(TARGET) : $O/$(TARGET)
	$(LN) $O/$(TARGET) .

$O/$(TARGET): $(OBJS)  $(wildcard $(EXTRA_OBJS)) Makefile
	@$(MKPATH) $O
	$(CXX) $(LDFLAGS) -o $O/$(TARGET)  $(OBJS) $(EXTRA_OBJS) $(WHOLE_ARCHIVE_ON) $(LIBS) $(WHOLE_ARCHIVE_OFF) $(OMNETPP_LIBS)

.PHONY:

.SUFFIXES: .cc

$O/%.o: %.cc
	@$(MKPATH) $(dir $@)
	$(CXX) -c $(COPTS) -o $@ $<

%_m.cc %_m.h: %.msg
	$(MSGC) -s _m.cc $(MSGCOPTS) $?

msgheaders: $(MSGFILES:.msg=_m.h)

clean:
	-rm -rf $O
	-rm -f Basic-Broadcast-Simulation Basic-Broadcast-Simulation.exe libBasic-Broadcast-Simulation.so libBasic-Broadcast-Simulation.a libBasic-Broadcast-Simulation.dll libBasic-Broadcast-Simulation.dylib
	-rm -f ./*_m.cc ./*_m.h
	-rm -f dbamac/*_m.cc dbamac/*_m.h
	-rm -f dbamac/ieee80211/*_m.cc dbamac/ieee80211/*_m.h
	-rm -f dbamac/ieee80211/mac/*_m.cc dbamac/ieee80211/mac/*_m.h
	-rm -f dbamac/ieee80211/mgmt/*_m.cc dbamac/ieee80211/mgmt/*_m.h
	-rm -f dbamac/mf80211/*_m.cc dbamac/mf80211/*_m.h
	-rm -f dbamac/mf80211/macLayer/*_m.cc dbamac/mf80211/macLayer/*_m.h
	-rm -f dbamac/mf80211/phyLayer/*_m.cc dbamac/mf80211/phyLayer/*_m.h
	-rm -f dbamac/mf80211/phyLayer/decider/*_m.cc dbamac/mf80211/phyLayer/decider/*_m.h
	-rm -f dbamac/mf80211/phyLayer/snrEval/*_m.cc dbamac/mf80211/phyLayer/snrEval/*_m.h
	-rm -f flooding/*_m.cc flooding/*_m.h

cleanall: clean
	-rm -rf $(PROJECT_OUTPUT_DIR)

depend:
	$(MAKEDEPEND) $(INCLUDE_PATH) -f Makefile -P\$$O/ -- $(MSG_CC_FILES)  ./*.cc dbamac/*.cc dbamac/ieee80211/*.cc dbamac/ieee80211/mac/*.cc dbamac/ieee80211/mgmt/*.cc dbamac/mf80211/*.cc dbamac/mf80211/macLayer/*.cc dbamac/mf80211/phyLayer/*.cc dbamac/mf80211/phyLayer/decider/*.cc dbamac/mf80211/phyLayer/snrEval/*.cc flooding/*.cc

# DO NOT DELETE THIS LINE -- make depend depends on it.
$O/dbamac/ieee80211/mac/Ieee80211Mac.o: dbamac/ieee80211/mac/Ieee80211Mac.cc \
	$(INET_SOMMER_PROJ)/src/base/NotifierConsts.h \
	$(INET_SOMMER_PROJ)/src/linklayer/contract/PhyControlInfo_m.h \
	$(INET_SOMMER_PROJ)/src/networklayer/common/InterfaceTableAccess.h \
	$(INET_SOMMER_PROJ)/src/linklayer/contract/RadioState.h \
	$(INET_SOMMER_PROJ)/src/networklayer/common/IInterfaceTable.h \
	$(INET_SOMMER_PROJ)/src/networklayer/common/InterfaceEntry.h \
	$(INET_SOMMER_PROJ)/src/base/INETDefs.h \
	$(INET_SOMMER_PROJ)/src/linklayer/contract/MACAddress.h \
	$(INET_SOMMER_PROJ)/src/networklayer/common/InterfaceToken.h \
	$(INET_SOMMER_PROJ)/src/base/ModuleAccess.h
$O/dbamac/ieee80211/mac/Ieee80211Frame_m.o: dbamac/ieee80211/mac/Ieee80211Frame_m.cc
$O/dbamac/ieee80211/mgmt/Ieee80211MgmtAdhoc.o: dbamac/ieee80211/mgmt/Ieee80211MgmtAdhoc.cc \
	$(INET_SOMMER_PROJ)/src/base/INETDefs.h \
	$(INET_SOMMER_PROJ)/src/linklayer/contract/MACAddress.h \
	$(INET_SOMMER_PROJ)/src/linklayer/contract/Ieee802Ctrl_m.h
$O/dbamac/ieee80211/mgmt/Ieee80211MgmtSTA.o: dbamac/ieee80211/mgmt/Ieee80211MgmtSTA.cc \
	$(INET_SOMMER_PROJ)/src/linklayer/contract/RadioState.h \
	$(INET_SOMMER_PROJ)/src/linklayer/contract/PhyControlInfo_m.h \
	$(INET_SOMMER_PROJ)/src/base/NotifierConsts.h \
	$(INET_SOMMER_PROJ)/src/base/Coord.h \
	$(INET_SOMMER_PROJ)/src/linklayer/mfcore/AirFrame_m.h \
	$(INET_SOMMER_PROJ)/src/base/INETDefs.h \
	$(INET_SOMMER_PROJ)/src/linklayer/contract/MACAddress.h \
	$(INET_SOMMER_PROJ)/src/util/FWMath.h \
	$(INET_SOMMER_PROJ)/src/world/ChannelControl.h \
	$(INET_SOMMER_PROJ)/src/linklayer/contract/Ieee802Ctrl_m.h
$O/dbamac/ieee80211/mgmt/Ieee80211MgmtAPSimplified.o: dbamac/ieee80211/mgmt/Ieee80211MgmtAPSimplified.cc \
	$(INET_SOMMER_PROJ)/src/linklayer/ethernet/Ethernet.h \
	$(INET_SOMMER_PROJ)/src/base/INETDefs.h \
	$(INET_SOMMER_PROJ)/src/linklayer/contract/MACAddress.h \
	$(INET_SOMMER_PROJ)/src/linklayer/ethernet/EtherFrame_m.h \
	$(INET_SOMMER_PROJ)/src/linklayer/contract/Ieee802Ctrl_m.h
$O/dbamac/ieee80211/mgmt/Ieee80211AgentSTA.o: dbamac/ieee80211/mgmt/Ieee80211AgentSTA.cc \
	$(INET_SOMMER_PROJ)/src/base/NotifierConsts.h \
	$(INET_SOMMER_PROJ)/src/base/INETDefs.h
$O/dbamac/ieee80211/mgmt/Ieee80211Primitives_m.o: dbamac/ieee80211/mgmt/Ieee80211Primitives_m.cc
$O/dbamac/ieee80211/mgmt/Ieee80211MgmtAP.o: dbamac/ieee80211/mgmt/Ieee80211MgmtAP.cc \
	$(INET_SOMMER_PROJ)/src/linklayer/contract/RadioState.h \
	$(INET_SOMMER_PROJ)/src/base/NotifierConsts.h \
	$(INET_SOMMER_PROJ)/src/linklayer/ethernet/Ethernet.h \
	$(INET_SOMMER_PROJ)/src/base/INETDefs.h \
	$(INET_SOMMER_PROJ)/src/linklayer/contract/MACAddress.h \
	$(INET_SOMMER_PROJ)/src/linklayer/ethernet/EtherFrame_m.h \
	$(INET_SOMMER_PROJ)/src/linklayer/contract/Ieee802Ctrl_m.h
$O/dbamac/ieee80211/mgmt/Ieee80211MgmtFrames_m.o: dbamac/ieee80211/mgmt/Ieee80211MgmtFrames_m.cc
$O/dbamac/ieee80211/mgmt/Ieee80211MgmtSTASimplified.o: dbamac/ieee80211/mgmt/Ieee80211MgmtSTASimplified.cc \
	$(INET_SOMMER_PROJ)/src/base/INETDefs.h \
	$(INET_SOMMER_PROJ)/src/linklayer/contract/MACAddress.h \
	$(INET_SOMMER_PROJ)/src/linklayer/contract/Ieee802Ctrl_m.h
$O/dbamac/ieee80211/mgmt/Ieee80211MgmtBase.o: dbamac/ieee80211/mgmt/Ieee80211MgmtBase.cc \
	$(INET_SOMMER_PROJ)/src/base/INETDefs.h \
	$(INET_SOMMER_PROJ)/src/linklayer/contract/MACAddress.h \
	$(INET_SOMMER_PROJ)/src/linklayer/contract/Ieee802Ctrl_m.h
$O/dbamac/ieee80211/mgmt/Ieee80211MgmtAPBase.o: dbamac/ieee80211/mgmt/Ieee80211MgmtAPBase.cc \
	$(INET_SOMMER_PROJ)/src/linklayer/ethernet/Ethernet.h \
	$(INET_SOMMER_PROJ)/src/base/INETDefs.h \
	$(INET_SOMMER_PROJ)/src/linklayer/contract/MACAddress.h \
	$(INET_SOMMER_PROJ)/src/linklayer/ethernet/EtherFrame_m.h \
	$(INET_SOMMER_PROJ)/src/linklayer/contract/Ieee802Ctrl_m.h
$O/dbamac/mf80211/macLayer/Mac80211.o: dbamac/mf80211/macLayer/Mac80211.cc \
	$(INET_SOMMER_PROJ)/src/base/NotifierConsts.h \
	$(INET_SOMMER_PROJ)/src/networklayer/common/InterfaceTableAccess.h \
	$(INET_SOMMER_PROJ)/src/linklayer/contract/RadioState.h \
	$(INET_SOMMER_PROJ)/src/networklayer/common/IInterfaceTable.h \
	$(INET_SOMMER_PROJ)/src/networklayer/common/InterfaceEntry.h \
	$(INET_SOMMER_PROJ)/src/base/INETDefs.h \
	$(INET_SOMMER_PROJ)/src/networklayer/common/InterfaceToken.h \
	$(INET_SOMMER_PROJ)/src/linklayer/contract/MACAddress.h \
	$(INET_SOMMER_PROJ)/src/base/ModuleAccess.h \
	$(INET_SOMMER_PROJ)/src/linklayer/contract/Ieee802Ctrl_m.h
$O/dbamac/mf80211/macLayer/MacPkt_m.o: dbamac/mf80211/macLayer/MacPkt_m.cc
$O/dbamac/mf80211/macLayer/CSMAMacLayer.o: dbamac/mf80211/macLayer/CSMAMacLayer.cc \
	$(INET_SOMMER_PROJ)/src/base/NotifierConsts.h \
	$(INET_SOMMER_PROJ)/src/networklayer/common/InterfaceTableAccess.h \
	$(INET_SOMMER_PROJ)/src/networklayer/common/IInterfaceTable.h \
	$(INET_SOMMER_PROJ)/src/networklayer/common/InterfaceEntry.h \
	$(INET_SOMMER_PROJ)/src/base/INETDefs.h \
	$(INET_SOMMER_PROJ)/src/base/ModuleAccess.h \
	$(INET_SOMMER_PROJ)/src/linklayer/contract/MACAddress.h \
	$(INET_SOMMER_PROJ)/src/networklayer/common/InterfaceToken.h \
	$(INET_SOMMER_PROJ)/src/linklayer/contract/Ieee802Ctrl_m.h
$O/dbamac/mf80211/macLayer/Mac80211Pkt_m.o: dbamac/mf80211/macLayer/Mac80211Pkt_m.cc
$O/dbamac/mf80211/phyLayer/decider/ErrAndCollDecider.o: dbamac/mf80211/phyLayer/decider/ErrAndCollDecider.cc \
	$(INET_SOMMER_PROJ)/src/base/Coord.h \
	$(INET_SOMMER_PROJ)/src/base/INETDefs.h \
	$(INET_SOMMER_PROJ)/src/linklayer/mfcore/AirFrame_m.h \
	$(INET_SOMMER_PROJ)/src/util/FWMath.h
$O/dbamac/mf80211/phyLayer/decider/Decider80211.o: dbamac/mf80211/phyLayer/decider/Decider80211.cc
$O/dbamac/mf80211/phyLayer/decider/SnrDecider.o: dbamac/mf80211/phyLayer/decider/SnrDecider.cc \
	$(INET_SOMMER_PROJ)/src/base/Coord.h \
	$(INET_SOMMER_PROJ)/src/base/INETDefs.h \
	$(INET_SOMMER_PROJ)/src/linklayer/mfcore/AirFrame_m.h \
	$(INET_SOMMER_PROJ)/src/util/FWMath.h
$O/dbamac/mf80211/phyLayer/snrEval/SnrEval.o: dbamac/mf80211/phyLayer/snrEval/SnrEval.cc \
	$(INET_SOMMER_PROJ)/src/util/FWMath.h
$O/dbamac/mf80211/phyLayer/snrEval/SnrEval80211.o: dbamac/mf80211/phyLayer/snrEval/SnrEval80211.cc \
	$(INET_SOMMER_PROJ)/src/base/Coord.h \
	$(INET_SOMMER_PROJ)/src/base/INETDefs.h \
	$(INET_SOMMER_PROJ)/src/linklayer/mfcore/AirFrame_m.h \
	$(INET_SOMMER_PROJ)/src/util/FWMath.h
$O/dbamac/mf80211/phyLayer/snrEval/GilbertElliotSnr.o: dbamac/mf80211/phyLayer/snrEval/GilbertElliotSnr.cc
$O/flooding/Flooding.o: flooding/Flooding.cc \
	$(INET_SOMMER_PROJ)/src/networklayer/contract/IPvXAddress.h \
	$(INET_SOMMER_PROJ)/src/transport/contract/UDPSocket.h \
	$(INET_SOMMER_PROJ)/src/transport/contract/UDPControlInfo_m.h \
	$(INET_SOMMER_PROJ)/src/networklayer/contract/IPv6Address.h \
	$(INET_SOMMER_PROJ)/src/networklayer/contract/IPAddress.h \
	$(INET_SOMMER_PROJ)/src/applications/udpapp/UDPAppBase.h \
	$(INET_SOMMER_PROJ)/src/base/INETDefs.h

