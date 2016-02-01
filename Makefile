all : main
main: main.o Array.o 
	g++ -g main.o Array.o -o main -std=c++11
	
main.o: main.cpp Array.h
	g++ -g -c main.cpp -o main.o -std=c++11
	
Array.o: Array.cpp Array.h
	g++ -g -c Array.cpp -Wall -o Array.o --std=c++11 

clean : 
	rm -f *.o
