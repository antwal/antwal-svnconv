CFLAGS += -DPC
LFLAGS += -lpthread

all: modeminit.o buffer.o
	gcc -o modeminit buffer.o modeminit.o $(CFLAGS) $(LFLAGS)

modeminit.o: modeminit.c
	gcc -o modeminit.o -c modeminit.c $(CFLAGS)

buffer.o: buffer.c
	gcc -o buffer.o -c buffer.c $(CFLAGS)


clean:
	rm -rf *.o modeminit
