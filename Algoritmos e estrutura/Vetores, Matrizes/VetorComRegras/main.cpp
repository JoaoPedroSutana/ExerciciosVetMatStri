#include <iostream>
using namespace std;

int main() {
    int V1[10], V2[10];
    for (int i = 0; i < 10; i++) {
        cout << "Digite o elemento " << i + 1 << " do vetor V1: ";
        cin >> V1[i];
    }
    for (int i = 0; i < 10; i++) {
        if (V1[i] % 2 == 0) {
            V2[i] = V1[i] * 5;
        } else {
            V2[i] = V1[i] + 5;
        }
    }
    cout << "Vetor V1: ";
    for (int i = 0; i < 10; i++) {
        cout << V1[i] << " ";
    }
    cout << endl;
    cout << "Vetor V2: ";
    for (int i = 0; i < 10; i++) {
        cout << V2[i] << " ";
    }
    cout << endl;
    return 0;
}
