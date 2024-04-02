#include "Header.h"
#include <iostream>

void Futuro::adivino(const std::string& nombre, int edad) {
    if (edad < 18) {
        std::cout << "Hola " << nombre << ", eres joven y tienes toda la vida por delante. Disfruta de esta etapa" << std::endl;
    }
    else if (edad >= 18 && edad < 30) {
        std::cout << "Hola " << nombre << ", estás en una etapa llena de oportunidades y nuevas experiencias. Aprovecha al máximo" << std::endl;
    }
    else if (edad >= 30 && edad < 50) {
        std::cout << "Hola " << nombre << ", eres una persona madura con experiencia y sabiduría. Comparte tus conocimientos con los demás" << std::endl;
    }
    else {
        std::cout << "Hola " << nombre << ", has vivido muchas experiencias y tienes mucho que contar. Disfruta de la vida y de la compañía de tus seres queridos" << std::endl;
    }
}
