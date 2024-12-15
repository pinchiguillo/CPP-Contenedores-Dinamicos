//
// Created by pinchiguillo on 15/12/2024.
//

#include "Ejercicio6.h"
#include <iostream>
#include <string>
#include <boost/lexical_cast.hpp>

void Ejercicio6() {
    std::string s = "12345";

    try {
        int i = boost::lexical_cast<int>(s);
        std::cout << "Número: " << i << std::endl;
    } catch (boost::bad_lexical_cast &e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }

}
