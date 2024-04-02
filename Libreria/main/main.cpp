#include <iostream>
#include <../Libreria/Libreria/Header.h>

int main() {
    std::string nombre;
    int edad;

    std::cout << "Introduce tu nombre: ";
    std::cin >> nombre;
    std::cout << "Introduce tu edad: ";
    std::cin >> edad;

    Futuro::adivino(nombre, edad);

    return 0;
}