#include <iostream>
using namespace std;

int main() {
    int vetor[5];
    int soma = 0;

    for (int i = 0; i < 5; i++) {
        cout << "Digite o elemento " << i + 1 << ": ";
        cin >> vetor[i];
    }
    for (int i = 0; i < 5; i++) {
        if (vetor[i] % 2 != 0) {
            soma += vetor[i];
        }
    }
    cout << endl << "Soma dos elementos impares: " << soma << endl;

    return 0;
}
