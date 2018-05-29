CC=g++
CFLAGS=-Wall -Werror -c


SRC=src/

BUILD=build/

BIN=bin/

objects=$(BUILD)main.o $(BUILD)function.o

sources=$(SRC)main.cpp $(SRC)function.cpp

EXE=$(BIN)main

.PHONY: all clean

all: bin build $(EXE)

$(EXE): $(objects)
	$(CC) $(objects) -o $@

$(BUILD)main.o: $(SRC)main.cpp 
	$(CC) $(CFLAGS) $(SRC)main.cpp -o $@
	
$(BUILD)function.o: $(SRC)function.cpp $(SRC)function.h 
	$(CC) $(CFLAGS) $(SRC)function.cpp -o $@
	
bin:
	mkdir bin
build:
	mkdir build
clean:
	-rm -rf build bin
