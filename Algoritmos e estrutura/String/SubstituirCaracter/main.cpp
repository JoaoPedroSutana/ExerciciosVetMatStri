#include <iostream>
#include <string>

int main() {
    std::string str;
    int count = 0;
    std::cout << "Digite uma string: ";
    std::getline(std::cin, str);
    for (char &c : str) {
        if (c == 'a') {
            c = 'b';
            count++;
        }
    }
    std::cout << "Numero de caracteres modificados: " << count << std::endl;
    std::cout << "String modificada: " << str << std::endl;
    return 0;
}
