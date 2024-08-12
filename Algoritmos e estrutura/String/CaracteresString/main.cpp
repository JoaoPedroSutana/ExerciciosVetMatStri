#include <iostream>
#include <string>

int main() {
    std::string str1, str2;
    std::cout << "Digite a primeira string: ";
    std::getline(std::cin, str1);
    std::cout << "Digite a segunda string: ";
    std::getline(std::cin, str2);
    std::cout << "Primeira string: " << str1 << std::endl;
    std::cout << "Segunda string: " << str2 << std::endl;
    if (str1.length() >= 2) {
        std::cout << "Segunda letra da primeira string: " << str1[1] << std::endl;
    } else {
        std::cout << "A primeira string não possui uma segunda letra." << std::endl;
    }
    if (str2.length() >= 2) {
        std::cout << "Penultima letra da segunda string: " << str2[str2.length() - 2] << std::endl;
    } else {
        std::cout << "A segunda string não possui uma penultima letra." << std::endl;
    }
    return 0;
}
