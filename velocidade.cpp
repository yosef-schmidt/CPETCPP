#include <iostream>

int main() {
    double distancia = 2966; // Distância em quilômetros
    double velocidade;

    // Solicita a velocidade ao usuário
    std::cout << "Digite a velocidade do veículo (em km/h): ";
    std::cin >> velocidade;

    // Calcula a velocidade média
    double tempo = distancia / velocidade;

    // Exibe a velocidade média na tela
    std::cout << "o tempo para chegar em em São Paulo vai ser de " << tempo << " horas." << std::endl;

    return 0;
}
