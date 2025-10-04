// Peça ao usuário para preencher um array com **10 números inteiros** e mostre-os em **ordem crescente**.

#include <iostream>

int main() {
    int numeros[10];

    // Leitura dos 10 números
    for(int i = 0; i < 10; i++) {
        std::cout << "Digite o numero " << i + 1 << ": ";
        std::cin >> numeros[i];
    }

    // Ordenação usando bubble sort
    for(int i = 0; i < 9; i++) {
        for(int j = 0; j < 9 - i; j++) {
            if(numeros[j] > numeros[j + 1]) {
                // troca os elementos
                int temp = numeros[j];
                numeros[j] = numeros[j + 1];
                numeros[j + 1] = temp;
            }
        }
    }

    // Exibição do array ordenado
    std::cout << "\nNumeros em ordem crescente: ";
    for(int i = 0; i < 10; i++) {
        std::cout << numeros[i] << " ";
    }

    std::cout << std::endl;
    return 0;
}
