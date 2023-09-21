all: areaquadrado idaderomano carroecasa velocidade

myprogram: areaquadrado.cpp
	g++ -o areaquadrado areaquadrado.cpp

idaderomano: idaderomano.cpp
	g++ -o idaderomano idaderomano.cpp
carroecasa: carroecasa.cpp
	g++ -o carroecasa carroecasa.cpp
velocidade: velocidade.cpp
	g++ -o velocidade velocidade.cpp