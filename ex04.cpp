// Peca os tres lado de um triangulo e determine se ele eh equilatero( todos os lados iguais) ou escaleno (todos os lados diferentes).

#include <iostream>

int main(){
    int lado1;
    int lado2;
    int lado3;

    std::cout << "Digite o primeiro lado: ";
    std::cin >> lado1;
    std::cout << "Digite o segundo lado: ";
    std::cin >> lado2;
    std::cout << "Digite o terceiro lado: ";
    std::cin >> lado3;

    if(lado1 + lado2 > lado3 &&
       lado1 + lado3 > lado2 &&
       lado2 + lado3 > lado1){

        if(lado1 == lado2 && lado2 == lado3){
            std::cout << "Os numeros formam um triangulo EQUILATERO";
        }
        else if(lado1 != lado2 && lado1 != lado3 && lado2 != lado3){
            std::cout << "Os numeros formam um triangulo ESCALENO";
        }
        else{
            std::cout << "Os numeros formam um triangulo ISOSCELES";
        }
    }
    return 0;
}