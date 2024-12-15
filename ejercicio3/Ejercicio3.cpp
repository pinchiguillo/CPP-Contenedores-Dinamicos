//
// Created by pinchiguillo on 15/12/2024.
//

#include "Ejercicio3.h"

#include <iostream>
#include <vector>
#include <algorithm> // sort, max_element

void Ejercicio3() {
    std::vector<int> numeros = {50, 20, 60, 10, 30, 40};

    // Ordenar el vector
    std::sort(numeros.begin(), numeros.end());

    // Mostrar vector ordenado
    for (int num : numeros) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    // Obtener el elemento máximo
    int maxNum = *std::max_element(numeros.begin(), numeros.end());
    std::cout << "Número máximo: " << maxNum << std::endl;

}
