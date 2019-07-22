# Makefile for the circle class example

runcircle: circlemain.o circle.o
	g++ circlemain.o circle.o -o runcircle

circlemain.o: circlemain.cpp circle.h
	g++ -c circlemain.cpp -o circlemain.o

circle.o: circle.cpp circle.h
	g++ -c circle.cpp -o circle.o

clean:
	rm circlemain.o circle.o runcircle

