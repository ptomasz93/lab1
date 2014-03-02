czas_alg:obj/main.o obj/funkcje.o
	g++  -Wall -o czas_alg obj/main.o obj/funkcje.o

main.o: src/main.cpp inc/funkcje.hh
	g++ -c -Wall -pedantic -g -Iinc -o obj/main.o src/main.cpp

funkcje.o: inc/funkcje.hh src/funkcje.cpp
	g++ -c -Wall -pedantic -g -Iinc -o obj/funkcje.o src/funkcje.cpp







