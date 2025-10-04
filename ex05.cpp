//Leia 5 notas (números reais), armazene em um array e calcule a média.

#include <iostream>

int main(){
    double notas[5];
    double soma = 0.0;
    
    for(int i = 0; i < 5; i++){
        std::cout << "Digite a " << i + 1 << " nota: ";
        std::cin >> notas[i];

        soma += notas[i];
    }

    double media = soma / 5;

    std::cout << "A media dessas notas eh de: " << media;

    return 0;
}