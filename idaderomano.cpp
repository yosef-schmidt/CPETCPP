#include <iostream>
#include <string>
#include <ctime>
#include <chrono>
#include <iomanip>

std::string intToRoman(int num) {
    std::string result = "";
    int values[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    std::string roman[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
    
    for (int i = 0; i < 13; i++) {
        while (num >= values[i]) {
            result += roman[i];
            num -= values[i];
        }
    }
    
    return result;
}

int main() {
    // Solicita ao usuário informações sobre o aluno e a data da atividade
    std::string nomeAluno;
    std::cout << "Digite o nome completo do aluno: ";
    std::cin.ignore();
    std::getline(std::cin, nomeAluno);

    std::string dataNascimentoStr;
    std::cout << "Digite a data de nascimento completa do aluno (YYYY-MM-DD): ";
    std::cin >> dataNascimentoStr;

    std::string dataAtividadeStr;
    std::cout << "Digite a data da atividade (DD-MM-YYYY): ";
    std::cin >> dataAtividadeStr;

    // Converte as datas para objetos de data e hora
    std::tm dataNascimento = {};
    std::tm dataAtividade = {};
    std::istringstream dataNascimentoStream(dataNascimentoStr);
    std::istringstream dataAtividadeStream(dataAtividadeStr);

    // Use std::get_time para converter as datas
    dataNascimentoStream >> std::get_time(&dataNascimento, "%Y-%m-%d");
    dataAtividadeStream >> std::get_time(&dataAtividade, "%d-%m-%Y");

    // Verifique se a conversão foi bem-sucedida
    if (dataNascimentoStream.fail() || dataAtividadeStream.fail()) {
        std::cerr << "Erro ao converter datas." << std::endl;
        return 1; // Saia com código de erro
    }

    // Calcula a idade do aluno em anos
    auto nascimento = std::chrono::system_clock::from_time_t(std::mktime(&dataNascimento));
    auto atual = std::chrono::system_clock::from_time_t(std::mktime(&dataAtividade));
    auto horas = std::chrono::duration_cast<std::chrono::hours>(atual - nascimento).count();
    auto anos = horas / 8760; // Aproximadamente 8760 horas em um ano

    // Converte a idade para números romanos
    std::string idadeRomana = intToRoman(anos);

    // Exibe o resultado na tela
    std::cout << "Nome do aluno: " << nomeAluno << std::endl;
    std::cout << "Idade em números romanos: " << idadeRomana << std::endl;
    std::cout << "Data da atividade: " << dataAtividadeStr << std::endl;

    return 0;
}