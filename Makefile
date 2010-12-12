#
# OMNeT++/OMNEST Makefile for Basic-Broadcast-Simulation
#
# This file was generated with the command:
#  opp_makemake --deep -f -I../inet-sommer/src/transport/contract -I../inet-sommer/src/networklayer/contract -I../inet-sommer/src/base -I/home/bedo/omnetpp/samples/inet-sommer/out/gcc-debug/src/transport/contract/
#

# Name of target to be created (-o option)
TARGET = Basic-Broadcast-Simulation$(EXE_SUFFIX)

# User interface (uncomment one) (-u option)
USERIF_LIBS = $(ALL_ENV_LIBS) # that is, $(TKENV_LIBS) $(CMDENV_LIBS)
#USERIF_LIBS = $(CMDENV_LIBS)
#USERIF_LIBS = $(TKENV_LIBS)

# C++ include paths (with -I)
INCLUDE_PATH = \
    -I../inet-sommer/src/transport/contract \
    -I../inet-sommer/src/networklayer/contract \
    -I../inet-sommer/src/base \
    -I/home/bedo/omnetpp/samples/inet-sommer/out/gcc-debug/src/transport/contract/ \
    -I. \
    -Igcc-debug \
    -Igcc-debug/src \
    -Igcc-debug/src/flooding \
    -Isimulations \
    -Isimulations/bitmaps \
    -Isimulations/results \
    -Isrc \
    -Isrc/flooding

# Additional object and library files to link with
EXTRA_OBJS =

# Additional libraries (-L, -l options)
LIBS =

# Output directory
PROJECT_OUTPUT_DIR = out
PROJECTRELATIVE_PATH =
O = $(PROJECT_OUTPUT_DIR)/$(CONFIGNAME)/$(PROJECTRELATIVE_PATH)

# Object files for local .cc and .msg files
OBJS = $O/src/flooding/Flooding.o

# Message files
MSGFILES =

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
	-rm -f gcc-debug/*_m.cc gcc-debug/*_m.h
	-rm -f gcc-debug/src/*_m.cc gcc-debug/src/*_m.h
	-rm -f gcc-debug/src/flooding/*_m.cc gcc-debug/src/flooding/*_m.h
	-rm -f simulations/*_m.cc simulations/*_m.h
	-rm -f simulations/bitmaps/*_m.cc simulations/bitmaps/*_m.h
	-rm -f simulations/results/*_m.cc simulations/results/*_m.h
	-rm -f src/*_m.cc src/*_m.h
	-rm -f src/flooding/*_m.cc src/flooding/*_m.h

cleanall: clean
	-rm -rf $(PROJECT_OUTPUT_DIR)

depend:
	$(MAKEDEPEND) $(INCLUDE_PATH) -f Makefile -P\$$O/ -- $(MSG_CC_FILES)  ./*.cc gcc-debug/*.cc gcc-debug/src/*.cc gcc-debug/src/flooding/*.cc simulations/*.cc simulations/bitmaps/*.cc simulations/results/*.cc src/*.cc src/flooding/*.cc

# DO NOT DELETE THIS LINE -- make depend depends on it.
$O/src/flooding/Flooding.o: src/flooding/Flooding.cc \
  ../inet-sommer/src/base/INETDefs.h \
  ../inet-sommer/src/networklayer/contract/IPAddress.h \
  ../inet-sommer/src/transport/contract/UDPSocket.h \
  ../inet-sommer/src/networklayer/contract/IPvXAddress.h \
  ../inet-sommer/src/transport/contract/UDPControlInfo_m.h \
  ../inet-sommer/src/networklayer/contract/IPv6Address.h \
  src/flooding/Flooding.h
