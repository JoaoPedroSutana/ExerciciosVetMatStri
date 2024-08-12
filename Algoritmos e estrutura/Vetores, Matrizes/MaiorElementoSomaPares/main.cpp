#include <iostream>

using namespace std;

int main() {
    int vetor[10], n;
    int maior1 = 0, maior2 = 0;
    int somaParesPosicoesImpares = 0;
    cout << "Quantos elementos deseja inserir (max 10): ";
    cin >> n;
    for (int i = 0; i < n; i++) {
        cout << "Digite o elemento " << i + 1 << ": ";
        cin >> vetor[i];
    }
    for (int i = 0; i < n; i++) {
        if (vetor[i] > maior1) {
            maior2 = maior1;
            maior1 = vetor[i];
        } else if (vetor[i] > maior2) {
            maior2 = vetor[i];
        }
    }
    for (int i = 1; i < n; i += 2) {
        if (vetor[i] % 2 == 0) {
            somaParesPosicoesImpares += vetor[i];
        }
    }
    cout << "Dois maiores elementos: " << maior1 << " e " << maior2 << endl;
    cout << "Soma dos elementos pares em posicoes impares: " << somaParesPosicoesImpares << endl;
    return 0;
}
