//Leia 10 números e mostre apenas os valores sem repetição.

#include <iostream>

int main(){
    int nums[10];

    for(int i = 0; i < 10; i++){
        std::cout << "Digite o numero " << i + 1 << ": ";
        std::cin >> nums[i];
    }

    std::cout << "\nNumeros sem repeticao: ";

    for(int i = 0; i < 10; i++){
        bool repetido = false;

        //Verifica se o numero nums[i] ja apreceu antes
        for(int j = 0; j < i; j++){
            if(nums[i] == nums[j]){
                repetido = true;
                break;
            }
        }

        if(!repetido){
            std::cout << nums[i] << " ";
        } 
    }
    
    std::cout << std::endl;
    return 0;
}