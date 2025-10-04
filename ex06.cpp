//Leia 6 números e exiba na ordem inversa em que foram digitados.

#include <iostream>

int main(){
    int num[6];

    for(int i= 0; i < 6; i++){
        std::cout << "Digite o numero " << i + 1 << ": ";
        std::cin >> num[i];
    }

    std::cout << "Ordem dos numeros digitados: ";
    for(int i = 5; i >= 0; i--){
        std::cout << num[i] << " ";
    }

    std::cout << std::endl;
    return 0;
}