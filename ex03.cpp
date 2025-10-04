// Leia **8 números inteiros** e mostre qual é o **maior** e o menor.

#include <iostream>

int main(){
    int nums[8];
    
    for(int i= 0; i < 8; i++){
        std::cout << "Digite o numero " << i + 1 << ": ";
        std::cin >> nums[i];
    }

    //Inicializa maior e menor com o primeiro elemento válido
    int maior = nums[0]; // Comeca assumindo que o primeiro eh o maior
    int menor = nums[0];

    for(int i = 1; i < 8; i++){ // Comeca o segundo elemento
        if(nums[i] > maior){
            maior = nums[i]; // Atualiza se encontrar um numero maior
        }
    }

    for(int i = 1; i < 8; i++){
        if(nums[i] < menor){
            menor = nums[i];
        }
    }

    std::cout << "O maior numero do array eh: " << maior << " E o menor eh: " << menor << std::endl;

    return 0;
}