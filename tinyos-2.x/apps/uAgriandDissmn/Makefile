COMPONENT=uAgriC
SENSORBOARD=mda300

CFLAGS += -I$(TOSDIR)/lib/net/ -I$(TOSDIR)/lib/net/ctp  -I$(TOSDIR)/lib/net/4bitle -I%T/lib/net/drip #-I%T/lib/net/dip/interfaces
#CFLAGS += -I$(TOSDIR)/lib/net/ -I$(TOSDIR)/lib/net/lqi  -I$(TOSDIR)/lib/net/le
#PFLAGS+=-DLOW_POWER_LISTENING
PFLAGS+=-DCC2420_DEF_CHANNEL=19
PFLAGS+=-DRF230_DEF_CHANNEL=19

include $(MAKERULES)
