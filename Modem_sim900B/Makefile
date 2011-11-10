CFLAGS += -DPC 
CFLAGS += -Wall
LFLAGS += -lpthread

all: modemInterface.o buffer.o ntp.o
	gcc -o modemInterface buffer.o modemInterface.o ntp.o $(CFLAGS) $(LFLAGS)

modeminit.o: modemInterface.c
	gcc -o modemInterface.o -c modemInterface.c $(CFLAGS)

buffer.o: buffer.c
	gcc -o buffer.o -c buffer.c $(CFLAGS)

ntp.o: ntp.c
	gcc -o ntp.o -c ntp.c $(CFLAGS)

clean:
	rm -rf *.o modemInterface
