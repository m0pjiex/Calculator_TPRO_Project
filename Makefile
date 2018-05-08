#Компилятор
CC=g++
#Ключи компиляции
CFLAGS=-Wall -Werror -c

#Путь к src
SRC=src/
#Путь к build
BUILD=build/
#Путь к bin
BIN=bin/
#Перечень объектных фаилов
objects=$(BUILD)main.o $(BUILD)function.o 
#Исходники
sources=$(SRC)main.cpp $(SRC)function.cpp 
#Исполняемый фаил
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
