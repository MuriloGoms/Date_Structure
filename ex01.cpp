// Peça ao usuário para digitar **5 números inteiros**, armazene em um array e mostre os números na ordem em que foram digitados.

#include <iostream>
using namespace std;

int main() {
    int numeros[5]; // array com 5 posições

    // Entrada dos números
    for (int i = 0; i < 5; i++) {
        cout << "Digite o numero " << i + 1 << ": ";
        cin >> numeros[i];
    }

    // Exibição dos números
    cout << "\nNumeros digitados: ";
    for (int i = 0; i < 5; i++) {
        cout << numeros[i] << " ";
    }

    cout << endl;
    return 0;
}
