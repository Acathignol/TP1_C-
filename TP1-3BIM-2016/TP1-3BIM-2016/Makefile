
tp1 : Array.o RandomArray.o Complex.o Fractal.o main.o
	g++ -o tp1 Array.o RandomArray.o Complex.o Fractal.o main.o

main.o : main.cpp Array.h RandomArray.h Complex.h Fractal.h
	g++ -c main.cpp -g -pg -W -Wall -std=c++11

Array.o : Array.cpp Array.h
	g++ -c Array.cpp -g -pg -W -Wall -std=c++11

RandomArray.o : RandomArray.cpp RandomArray.h Array.h
	g++ -c RandomArray.cpp -g -pg -W -Wall -std=c++11

Complex.o : Complex.cpp Complex.h
	g++ -c Complex.cpp -g -pg -W -Wall -std=c++11

Fractal.o : Fractal.cpp Fractal.h Complex.h
	g++ -c Fractal.cpp -g -pg -W -Wall -std=c++11

clean :
	rm -rf tp1 *.o *.do