//Leia **10 números** e mostre a soma de todos eles.

#include <iostream>

int main(){
    int nums[10]; // Array com 10 posicoes
    int soma = 0;

    for(int i = 0; i < 10; i++){
        std::cout << "Digite o numero " << i + 1 << ": ";
        std::cin >> nums[i];
        soma += nums[i]; // Ja soma durante a leitura
    }

    //Resultado
    std::cout << "A soma dos 10 valores eh de: " << soma << std::endl;

    return 0;
}