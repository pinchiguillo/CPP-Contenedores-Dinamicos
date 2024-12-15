//
// Created by pinchiguillo on 15/12/2024.
//

#include <locale>
#include <iostream>

int main() {

    std::locale::global(std::locale(""));

    std::cout << "Hello, World!" << std::endl;

    return 0;
}