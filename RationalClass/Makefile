# Makefile for the complex class example

CMP = g++
CLASS = rational
MAIN = ratmain
EXEC = runit

$(EXEC): $(MAIN).o $(CLASS).o
	$(CMP) $(MAIN).o $(CLASS).o -o $(EXEC)

$(MAIN).o: $(MAIN).cpp $(CLASS).h
	$(CMP) -c $(MAIN).cpp -o $(MAIN).o

$(CLASS).o: $(CLASS).cpp $(CLASS).h
	$(CMP) -c $(CLASS).cpp -o $(CLASS).o

clean:
	rm $(MAIN).o $(CLASS).o $(EXEC)

