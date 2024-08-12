#include <iostream>

using namespace std;

int main() {
    int quantidades[5];
    float precos[5];
    float totalProduto[5];
    float totalCompra = 0;
    for (int i = 0; i < 5; i++) {
        cout << "Digite a quantidade do produto " << i + 1 << ": ";
        cin >> quantidades[i];
        cout << "Digite o preco unitario do produto " << i + 1 << ": ";
        cin >> precos[i];
        totalProduto[i] = quantidades[i] * precos[i];
        totalCompra += totalProduto[i];
    }
    for (int i = 0; i < 5; i++) {
        cout << endl << "Valor total do produto " << i + 1 << ": " << totalProduto[i] << endl;
    }
    cout << endl << "Valor total da compra: " << totalCompra << endl;
    return 0;
}
