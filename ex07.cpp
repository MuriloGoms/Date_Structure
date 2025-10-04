//Peça ao usuário para preencher um array com **10 números** e depois digite um valor **X**. Informe se X está ou não presente no array.

#include <iostream>

int main(){
    int nums[10];
    int x;
    bool encontrado = false; //Flag pra verificar se encontrou

    for(int i = 0; i < 10; i++){
        std::cout << "Digite o numero: " << i + 1 << ": ";
        std::cin >> nums[i];
    }

    //Verificar
    std::cout << "Digite o valor de X: ";
    std::cin >> x;
    for(int i = 0; i < 10; i++){
        if(nums[i] == x){
            encontrado = true;
            break; //Para de procurar
        }
    }
    if(encontrado){
        std::cout << "O valor de X esta presente no array!" << std::endl;
    }
    else{
        std::cout << "O valor de X nao esta presente no array!!" << std::endl;
    }
    
    return 0;
}

