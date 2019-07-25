# this Makefile is written specifically for the address and person classes,
#  and generates two executables, for the two main driver examples
#

# build both main1 and main2
all: main1 main2

# build the main1 executable
main1: main1.o address.o  
	g++ main1.o address.o -o main1

# build the main2 executable
main2: main2.o person.o address.o
	g++ main2.o person.o address.o -o main2

# compile the main drivers, when needed
main1.o: main1.cpp address.h
	g++ -c main1.cpp -o main1.o

main2.o: main2.cpp person.h address.h
	g++ -c main2.cpp -o main2.o

# compile the class implementation files, when needed
person.o: person.cpp person.h address.h
	g++ -c person.cpp -o person.o

address.o: address.cpp address.h
	g++ -c address.cpp -o address.o

# clean up
clean:
	rm -f *.o 
	rm -f main1 main2

