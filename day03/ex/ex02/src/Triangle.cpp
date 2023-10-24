#include "Triangle.hpp"
#include <iostream>

Triangle::Triangle(double s1, double s2, double s3) : side1(s1), side2(s2), side3(s3) {}

double Triangle::area()  {
    std::cout << "Triangle" << std::endl;
    double s = (side1 + side2 + side3) / 2;
    return manual_sqrt(s * (s - side1) * (s - side2) * (s - side3));
}

double Triangle::perimeter()  {
    std::cout << "Triangle" << std::endl;
    return side1 + side2 + side3;
}

double Triangle::manual_abs(double x) {
    if (x < 0) {
        return -x; // Se x é negativo, retorna o oposto de x
    } else {
        return x; // Se x é não negativo, retorna x
    }
}

double Triangle::manual_sqrt(double x) {
    if (x < 0) {
        // Lidamos com números negativos (não tratamos complexos)
        std::cerr << "Erro: Não é possível calcular a raiz de um número negativo." << std::endl;
        return -1.0; // Valor de erro
    }

    if (x == 0 || x == 1) {
        return x; // Raiz quadrada de 0 ou 1 é o próprio número
    }

    double epsilon = 0.00001; // Precisão desejada
    double low = 0.0;
    double high = x;
    double guess = (low + high) / 2;

    while (manual_abs(guess * guess - x) > epsilon) {
        if (guess * guess > x) {
            high = guess;
        } else {
            low = guess;
        }
        guess = (low + high) / 2;
    }

    return guess;
}


