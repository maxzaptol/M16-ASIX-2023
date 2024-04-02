#include "Header.h"
#include <iostream>

void Futuro::adivino(const std::string& nombre, int edad) {
    if (edad < 18) {
        std::cout << "Hola " << nombre << ", eres joven y tienes toda la vida por delante. Disfruta de esta etapa" << std::endl;
    }
    else if (edad >= 18 && edad < 30) {
        std::cout << "Hola " << nombre << ", est�s en una etapa llena de oportunidades y nuevas experiencias. Aprovecha al m�ximo" << std::endl;
    }
    else if (edad >= 30 && edad < 50) {
        std::cout << "Hola " << nombre << ", eres una persona madura con experiencia y sabidur�a. Comparte tus conocimientos con los dem�s" << std::endl;
    }
    else {
        std::cout << "Hola " << nombre << ", has vivido muchas experiencias y tienes mucho que contar. Disfruta de la vida y de la compa��a de tus seres queridos" << std::endl;
    }
}
