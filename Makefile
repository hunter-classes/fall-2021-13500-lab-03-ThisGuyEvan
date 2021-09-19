# Starter Makefile
# add .cpp and .h files as specified in each task. 

  
OBJECTS=main.o reservoir.o
CXXFLAGS=-Wall -Wpedantic
LDFLAGS=-lm

main: main.o reservoir.o
	g++ -o main $(LDFLAGS) $(OBJECTS)

main.o: main.cpp reservoir.h
	g++ -c $(CXXFLAGS) main.cpp

reservoir.o: reservoir.cpp reservoir.h
	g++ -c $(CXXFLAGS) reservoir.cpp

clean:
	rm -f $(OBJECTS)

help:
	@echo "Targets:"
	@echo " main"
	@echo " clean"

