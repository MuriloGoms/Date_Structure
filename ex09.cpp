// Leia o peso e a altura de uma pessoa e calcule o seu IMC, informando tambem qual a sua condicao (magro, normal, obeso, etc.).

#include <iostream>

int main(){
    double altura;
    double peso;
    double imc;

    std::cout << "Digite sua altura: ";
    std::cin >> altura;

    std::cout << "Digite seu peso: ";
    std::cin >> peso;

    imc = peso / (altura * altura);

    std::cout << "Seu IMC eh: " << imc << std::endl;

    if(imc < 18.5){
        std::cout << "Abaixo do peso!";
    }
    else if(imc > 18.5 && imc < 24.9){
        std::cout << "Peso normal";
    }
    else if(imc > 25 && imc < 29.9){
        std::cout << "Sobre peso!";
    }
    else{
        std::cout << "Obesidade!!";
    }

    return 0;

}