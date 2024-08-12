#include <iostream>
#include <cmath>
using namespace std;

int main() {
    float notas[5], media = 0, desvios[5], desviosQuadrados[5];
    float variancia = 0, desvioPadrao;
    for (int i = 0; i < 5; i++) {
        cout << "Digite a nota do aluno " << i + 1 << ": ";
        cin >> notas[i];
        media += notas[i];
    }
    media /= 5;
    for (int i = 0; i < 5; i++) {
        desvios[i] = notas[i] - media;
        desviosQuadrados[i] = pow(desvios[i], 2);
        variancia += desviosQuadrados[i];
    }
    variancia /= 5;
    desvioPadrao = sqrt(variancia);
    cout << "Variancia: " << variancia << endl;
    cout << "Desvio padrao: " << desvioPadrao << endl;
    return 0;
}
