all : main
main: main.o Classname.o 
	g++ -g main.o Classname.o -o main -std=c++11
	
main.o: main.cpp Classname.h
	g++ -g -c main.cpp -o main.o -std=c++11
	
Classname.o: Classname.cpp Classname.h
	g++ -g -c Classname.cpp -Wall -o Classname.o --std=c++11 

clean : 
	rm -f *.o
