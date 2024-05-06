#include <iostream>
#include <ctime>
#include <cstdlib>
#include "Lancha.h"

using namespace std;

using namespace std;

int main() {
    
    Lancha lancha1("Lancha 1");
    Lancha lancha2("Lancha 2");

    char tecla;

    for (int turno = 1; turno <= 5; turno++) {
        std::cout << "\nTurno de lancha 1\n ";
        std::cout << lancha1.lanzarDado();
        if (lancha1.getNitro()) {

            std::cout << "\nPresiona 's' para usar el nitro\n";

            

            if (tecla == 's' || tecla == 'S') {

                lancha1.usarNitro();

                std::cout << "Nitro añadido\n";

            }

        }

        lancha1.calcularDistancia();
    }

    for (int turno = 1; turno <= 5; turno++) {
        cout << "\nTurno de lancha 2\n ";
        cout << lancha2.lanzarDado();
        if (lancha2.getNitro()) {

            std::cout << "\nPresiona 's' para usar el nitro, o cualquier otra tecla para continuar...\n";

            

            if (tecla == 's' || tecla == 'S') {

                lancha2.usarNitro();

                std::cout << "Nitro activado!\n";

            }

        }
        lancha2.calcularDistancia();
    }


    if (lancha1.getDistanciaRecorrida() > lancha2.getDistanciaRecorrida()) {
        std::cout << "\nEl ganador es " << lancha1.getnombrelancha() << std::endl;
    }
    else if (lancha1.getDistanciaRecorrida() < lancha2.getDistanciaRecorrida()) {
        std::cout << "\nEl ganador es " << lancha2.getnombrelancha() << std::endl;
    }
    else {
        std::cout << "\nHa habido un empate!" << std::endl;
    }

    return 0;
}