all: main.o sort.o
	g++ -o sort main.o sort.o

clean:
	rm *.o
