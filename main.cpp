//
// Created by pinchiguillo on 15/12/2024.
//

#include <locale>
#include <iostream>

#include "ejercicio1/Ejercicio1.h"

int main() {

    std::locale::global(std::locale(""));

    int opt = 0;

    std::cout << "Elija el ejercicio a ejecutar: ";
    std::cin >> opt;

    switch (opt) {
        case 1: Ejercicio1(); break;

        default:
            std::cout << "Ejercicio no encontrado" << std::endl;
    }

    return 0;
}