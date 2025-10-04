// Desenvolva um programa que receba um numero inteiro e diga se ele eh par ou impar, usando o operador de modulo (%).

#include <iostream>

int main(){
    int num;

    std::cout << "Digite um numero: ";
    std::cin >> num;

    if(num % 2 == 0){
        std::cout << "O numero " << num << " eh par" << std::endl;
    }
    else {
        std::cout << "O numero " << num << " eh impar" << std::endl;
    }
    
    return 0;
}