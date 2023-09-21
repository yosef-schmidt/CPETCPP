#include <iostream>

int main() {
    
    std::cout << "Digite o valor da base do quadrado (em cm): ";
    float base;
    std::cin >> base;

    std::cout << "Digite o valor da altura do quadrado (em cm): ";
    float altura;
    std::cin >> altura;

    
    float area = base * altura;

    
    std::cout << "A área do quadrado é: " << area << " cm²" << std::endl;

    return 0;
}