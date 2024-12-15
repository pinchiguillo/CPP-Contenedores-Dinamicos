//
// Created by pinchiguillo on 15/12/2024.
//

#include "Ejercicio4.h"

#include <iostream>
#include <valarray>

void Ejercicio4() {
    std::valarray<double> valores = {1.0, 2.0, 3.0, 4.0, 5.0};

    std::cout << "Suma de todos los elementos: " << valores.sum() << std::endl;
    std::cout << "Media: " << valores.sum() / valores.size() << std::endl;

    // Añadir 5.0 a cada elemento
    valores += 5.0;

    std::cout << "Valores tras sumar 5.0: ";
    for (double valor : valores) {
        std::cout << valor << " ";
    }
    std::cout << std::endl;

    // Ejemplo de multiplicación escalar
    valores *= 2.0;
    std::cout << "Valores tras multiplicar por 2.0: ";
    for (double valor : valores) {
        std::cout << valor << " ";
    }
    std::cout << std::endl;

}
