#include <iostream>
using namespace std;

int main() {
    int M, N, K;
    cout << "Digite o numero de linhas (M) da matriz (max 20): ";
    cin >> M;
    cout << "Digite o numero de colunas (N) da matriz (max 25): ";
    cin >> N;
    int matriz[M][N], transposta[N][M], matrizMultiplicada[M][N], matrizAdicao[M][N], matriz2[M][N];
    cout << "Digite os elementos da primeira matriz:" << endl;
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            cout << "Elemento [" << i + 1 << "][" << j + 1 << "]: ";
            cin >> matriz[i][j];
        }
    }
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            transposta[j][i] = matriz[i][j];
        }
    }
    cout << "Digite o valor de K para multiplicar a matriz: ";
    cin >> K;
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            matrizMultiplicada[i][j] = matriz[i][j] * K;
        }
    }
    cout << "Digite os elementos da segunda matriz para adicao:" << endl;
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            cout << "Elemento [" << i + 1 << "][" << j + 1 << "]: ";
            cin >> matriz2[i][j];
            matrizAdicao[i][j] = matriz[i][j] + matriz2[i][j];
        }
    }
    cout << "Matriz Transposta:" << endl;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cout << transposta[i][j] << " ";
        }
        cout << endl;
    }
    cout << "Matriz Multiplicada por K:" << endl;
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            cout << matrizMultiplicada[i][j] << " ";
        }
        cout << endl;
    }
    cout << "Soma das duas matrizes:" << endl;
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            cout << matrizAdicao[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
