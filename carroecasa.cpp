#include <iostream>
#include <string>

int main() {
    // Solicita ao usuário informações sobre o estabelecimento e o carro
    std::string nomeEstabelecimento;
    std::cout << "Digite o nome do estabelecimento: ";
    std::getline(std::cin, nomeEstabelecimento);

    std::string numeroPlaca;
    std::cout << "Digite o número da placa do carro: ";
    std::getline(std::cin, numeroPlaca);

    std::string modeloCarro;
    std::cout << "Digite o modelo do carro: ";
    std::getline(std::cin, modeloCarro);

    std::string corCarro;
    std::cout << "Digite a cor do carro: ";
    std::getline(std::cin, corCarro);

    // Exibe as informações na tela
    std::cout << "Nome do estabelecimento: " << nomeEstabelecimento << std::endl;
    std::cout << "Número da placa do carro: " << numeroPlaca << std::endl;
    std::cout << "Modelo do carro: " << modeloCarro << std::endl;
    std::cout << "Cor do carro: " << corCarro << std::endl;

    return 0;
}
