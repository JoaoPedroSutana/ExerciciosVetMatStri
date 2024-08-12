#include <iostream>
#include <string>

int main() {
    std::string nome, menor_nome;
    std::cout << "Digite os nomes (linha vazia para encerrar):" << std::endl;
    while (true) {
        std::getline(std::cin, nome);
        if (nome.empty()) {
            break;
        }
        if (menor_nome.empty() || nome < menor_nome) {
            menor_nome = nome;
        }
    }
    if (!menor_nome.empty()) {
        std::cout << "O nome lexicograficamente menor e: " << menor_nome << std::endl;
    } else {
        std::cout << "Nenhum nome foi fornecido." << std::endl;
    }
    return 0;
}
