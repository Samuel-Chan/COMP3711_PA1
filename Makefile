all: main.o
	g++ -o sort main.o

clean:
	rm *.o
