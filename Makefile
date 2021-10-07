OBJECTS=main.o reservoir.o reverseorder.o
CXXFLAGS=-Wall -Wpedantic
LDFLAGS=-lm

main: main.o reservoir.o reverseorder.o
	g++ -o main $(LDFLAGS) $(OBJECTS)

main.o: main.cpp reservoir.h reverseorder.h
	g++ -c $(CXXFLAGS) main.cpp

reservoir.o: reservoir.cpp reservoir.h
	g++ -c $(CXXFLAGS) reservoir.cpp

reverse_order.o: reverseorder.cpp reverseorder.h
	g++ -c $(CXXFLAGS) reverseorder.h

clean:
	rm -f $(OBJECTS)

help:
	@echo "Targets:"
	@echo " main"
	@echo " clean"

