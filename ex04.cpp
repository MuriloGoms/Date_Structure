//Peça ao usuário 10 números e conte quantos deles são pares.

#include <iostream>

int main(){
    int nums[10];
    int pares = 0;

    for(int i = 0; i < 10; i++){
        std::cout << "Digite o numero " << i + 1 << ": ";
        std::cin >> nums[i];
    }

    for(int i = 0; i < 10; i++){
        if(nums[i] % 2 == 0){
            pares++;
        }
    }
    std::cout << "No array existe " << pares << " numeros pares";

    return 0;
}