// Um programa que le o preco de um produto e aplica um desconto de 10% caso o preco seja maior que R$ 100, exibindo o novo valor.

#include <iostream>

int main(){
    double preco;
    double desconto;

    std::cout << "Qual eh o valor do produto? ";
    std::cin >> preco;

    if(preco >= 100){
        desconto = (preco / 100) * 10;
        std::cout << "O valor com desconto aplicado eh de: " << preco - desconto << std::endl;
    }
    else{
        std::cout << "Nao eh possivel aplicar o desconto" << std::endl;
    }
    
    return 0;
}