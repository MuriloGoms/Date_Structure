// Faca um programa que peca uma senha ao usuario e diga "ACESSO PERMITIDO" ou "ACESSO NEGADO", se a senha for 1234.

#include <iostream>

int main(){
    std::string senha;

    std::cout << "Digite sua senha: ";
    std::cin >> senha;

    if(senha == "1234"){
        std::cout << "ACESSO PERMITIDO!";
    }
    else {
        std::cout << "ACESSO NEGADO!";
    }
    
    return 0;
}