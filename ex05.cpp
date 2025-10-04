//Crie uma calculadora que receba dois numeros e um operador (+, -, *, /) e exiba o resultado

#include <iostream>
#include <string>

int main(){
    int num1;
    int num2;
    std::string op;
    int result;

    std::cout << "Digite um numero: ";
    std::cin >> num1;

    std::cout << "Digite o operador [+ - * /]: ";
    std::cin >> op;

    std::cout << "Digite outro numero: ";
    std::cin >> num2;

    if(op == "+"){
        result = num1 + num2;
    }
    else if(op == "-"){
        result = num1 - num2;
    }
    else if(op == "*"){
        result = num1 * num2;
    }
    else if(op == "/"){
        if (num2 != 0){
            result = num1 / num2;
        }
        else{
            std::cout << "ERRO: divisao por zero!" << std::endl;
            return 1;
        }
    }
    else {
        std::cout << "Operador invalido!" << std::endl;
        return 1;
    }

    std::cout << "O resultado da conta " << num1 << " " << op << " " << num2 << " = " << result << std::endl;

    return 0;
}