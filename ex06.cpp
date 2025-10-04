//Peca as cordenadas X e Y de um ponto no plano cartesiano e diga em qual quadrante o plano se encontra

#include <iostream>

int main() {
    double x, y;

    std::cout << "Digite a coordenada X: ";
    std::cin >> x;

    std::cout << "Digite a coordenada Y: ";
    std::cin >> y;

    if (x > 0 && y > 0) {
        std::cout << "O ponto (" << x << ", " << y << ") esta no 1º quadrante." << std::endl;
    }
    else if (x < 0 && y > 0) {
        std::cout << "O ponto (" << x << ", " << y << ") esta no 2º quadrante." << std::endl;
    }
    else if (x < 0 && y < 0) {
        std::cout << "O ponto (" << x << ", " << y << ") esta no 3º quadrante." << std::endl;
    }
    else if (x > 0 && y < 0) {
        std::cout << "O ponto (" << x << ", " << y << ") esta no 4º quadrante." << std::endl;
    }
    else if (x == 0 && y == 0) {
        std::cout << "O ponto (" << x << ", " << y << ") esta na origem." << std::endl;
    }
    else if (x == 0) {
        std::cout << "O ponto (" << x << ", " << y << ") esta sobre o eixo Y." << std::endl;
    }
    else if (y == 0) {
        std::cout << "O ponto (" << x << ", " << y << ") esta sobre o eixo X." << std::endl;
    }

    return 0;
}