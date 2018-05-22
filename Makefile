all:checkdir bin/calcul

test:bin/calcul-test

bin/calcul:build/calc.o build/function.o 
	g++ build/calc.o  build/function.o -o bin/calcul -lm

bin/calcul-test: build/main_test.o build/calc.o 
	g++ Wall -Werror build/main_test.o build/calc.o -o bin/calcul-test -lm

build/function.o:src/function.cpp
	g++ -c src/function.cpp -o build/function.o -Wall -Werror

build/calc.o:src/main.cpp
	g++ -c src/main.cpp -o build/calc.o -Wall -Werror


build/main_test.o: tests/main.c
	gcc -I thirdparty -I src -c tests/main.c -o build/main_test.o

checkdir:
	@if [ -d bin  ];then echo ; else mkdir bin;fi
	@if [ -d build  ];then echo ; else mkdir build;fi

.PHONY:clean

clean:
	rm build/*.o
	rm bin/*.exe
