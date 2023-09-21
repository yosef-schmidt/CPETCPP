all: areaquadrado idaderomano carroecasa

myprogram: areaquadrado.cpp
	g++ -o areaquadrado areaquadrado.cpp

idaderomano: idaderomano.cpp
	g++ -o idaderomano idaderomano.cpp
carroecasa: carroecasa.cpp
	g++ -0 carroecasa carroecasa.cpp