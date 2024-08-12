#include <iostream>
#include <string>

int main() {
    double salario, novo_salario;
    std::string cargo;
    std::cout << "Digite o salario do funcionario: ";
    std::cin >> salario;
    std::cin.ignore();
    std::cout << "Digite o cargo do funcionario: ";
    std::getline(std::cin, cargo);
    if (cargo == "Gerente") {
        novo_salario = salario * 1.10;
    } else if (cargo == "Engenheiro") {
        novo_salario = salario * 1.20;
    } else if (cargo == "Tecnico") {
        novo_salario = salario * 1.30;
    } else {
        novo_salario = salario * 1.05;
    }
    std::cout << "Salario antigo: " << salario << std::endl;
    std::cout << "Novo salario: " << novo_salario << std::endl;
    std::cout << "Diferenca: " << (novo_salario - salario) << std::endl;
    return 0;
}
