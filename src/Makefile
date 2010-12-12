#
# OMNeT++/OMNEST Makefile for Basic-Broadcast-Simulation
#
# This file was generated with the command:
#  opp_makemake -f --deep -I../../inet-sommer/src/networklayer/ipv4 -I../../inet-sommer/src/networklayer/ted -I../../inet-sommer/src/transport/tcp -I../../inet-sommer/src/transport/contract -I../../inet-sommer/src/linklayer/contract -I../../inet-sommer/src/linklayer/mfcore -I../../inet-sommer/src/transport/sctp -I../../inet-sommer/src/networklayer/contract -I../../inet-sommer/src/applications/pingapp -I../../inet-sommer/src/transport/udp -I../../inet-sommer/src/networklayer/ipv6 -I../../inet-sommer/src/util -I../../inet-sommer/src/world -I../../inet-sommer/src/networklayer/arp -I../../inet-sommer/src/networklayer/rsvp_te -I../../inet-sommer/src/networklayer/icmpv6 -I../../inet-sommer/src/networklayer/ldp -I../../inet-sommer/src/networklayer/mpls -I../../inet-sommer/src/base -I../../inet-sommer/src/networklayer/common -I../../inet-sommer/src/util/headerserializers -L../../inet-sommer/out/$(CONFIGNAME)/src -linet -KINET_SOMMER_PROJ=../../inet-sommer
#

# Name of target to be created (-o option)
TARGET = Basic-Broadcast-Simulation$(EXE_SUFFIX)

# User interface (uncomment one) (-u option)
USERIF_LIBS = $(ALL_ENV_LIBS) # that is, $(TKENV_LIBS) $(CMDENV_LIBS)
#USERIF_LIBS = $(CMDENV_LIBS)
#USERIF_LIBS = $(TKENV_LIBS)

# C++ include paths (with -I)
INCLUDE_PATH = \
    -I../../inet-sommer/src/networklayer/ipv4 \
    -I../../inet-sommer/src/networklayer/ted \
    -I../../inet-sommer/src/transport/tcp \
    -I../../inet-sommer/src/transport/contract \
    -I../../inet-sommer/src/linklayer/contract \
    -I../../inet-sommer/src/linklayer/mfcore \
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
    -I. \
    -Iflooding

# Additional object and library files to link with
EXTRA_OBJS =

# Additional libraries (-L, -l options)
LIBS = -L../../inet-sommer/out/$(CONFIGNAME)/src  -linet
LIBS += -Wl,-rpath,`abspath ../../inet-sommer/out/$(CONFIGNAME)/src`

# Output directory
PROJECT_OUTPUT_DIR = ../out
PROJECTRELATIVE_PATH = src
O = $(PROJECT_OUTPUT_DIR)/$(CONFIGNAME)/$(PROJECTRELATIVE_PATH)

# Object files for local .cc and .msg files
OBJS = $O/flooding/Flooding.o

# Message files
MSGFILES =

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
	-rm -f flooding/*_m.cc flooding/*_m.h

cleanall: clean
	-rm -rf $(PROJECT_OUTPUT_DIR)

depend:
	$(MAKEDEPEND) $(INCLUDE_PATH) -f Makefile -P\$$O/ -- $(MSG_CC_FILES)  ./*.cc flooding/*.cc

# DO NOT DELETE THIS LINE -- make depend depends on it.
$O/flooding/Flooding.o: flooding/Flooding.cc \
	$(INET_SOMMER_PROJ)/src/networklayer/contract/IPvXAddress.h \
	$(INET_SOMMER_PROJ)/src/transport/contract/UDPSocket.h \
	$(INET_SOMMER_PROJ)/src/transport/contract/UDPControlInfo_m.h \
	flooding/Flooding.h \
	$(INET_SOMMER_PROJ)/src/networklayer/contract/IPv6Address.h \
	$(INET_SOMMER_PROJ)/src/networklayer/contract/IPAddress.h \
	$(INET_SOMMER_PROJ)/src/base/INETDefs.h

