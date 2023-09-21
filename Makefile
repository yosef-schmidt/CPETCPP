all: myprogram idaderomano

myprogram: main.cpp
	g++ -o myprogram main.cpp

idaderomano: idaderomano.cpp
	g++ -o idaderomano idaderomano.cpp
