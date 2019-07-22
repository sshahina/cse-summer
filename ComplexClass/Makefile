# Makefile for the complex class example

runcomplex: complexmain.o complex.o
	g++ complexmain.o complex.o -o runcomplex

complexmain.o: complexmain.cpp complex.h
	g++ -c complexmain.cpp -o complexmain.o

complex.o: complex.cpp complex.h
	g++ -c complex.cpp -o complex.o

clean:
	rm complexmain.o complex.o runcomplex

