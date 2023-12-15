#include <iostream>

using namespace std;

// Definici�n de los personajes
struct personaje {
    char nombre[20];
    int da�o;
    int vida;
    int vivo;
};

// Definici�n de los tres tipos de ataque del h�roe
enum ataque {
    espada,
    magia,
    pu�etazo
};

// Asignaci�n de un da�o a cada ataque
int ataques[3] = { 10, 15, 5 };

// Definici�n de un contador para el n�mero de veces que se puede usar el ataque de pu�etazo
int contador_puetazo = 3;

int main()
{
    // Definici�n de los personajes
    struct personaje heroe = { "El h�roe", 10, 500, 1 };
    struct personaje enemigo = { "El enemigo", 5, 200, 1 };
    struct personaje enemigo2 = { "El segundo enemigo", 5, 200, 1 };

    // Bucle del juego
    while (heroe.vivo && enemigo.vivo && enemigo2.vivo) {
        // Turno del enemigo
        if (enemigo.vivo) {
            // Hace da�o al h�roe
            enemigo.da�o = rand() % 10 + 1;
            heroe.vida -= enemigo.da�o;
        }

        if (enemigo2.vivo) {
            // Hace da�o al h�roe
            enemigo2.da�o = rand() % 10 + 1;
            heroe.vida -= enemigo2.da�o;
        }

        // Turno del h�roe
        if (heroe.vivo) {
            // El h�roe elige a qu� enemigo atacar
            printf("�A qu� enemigo quieres atacar? (1-Enemigo 1, 2-Enemigo 2): ");
            int enemigo_a_atacar;
            scanf("%d", &enemigo_a_atacar);

            // Hace da�o al enemigo elegido
            if (enemigo_a_atacar == 1) {
                // El ataque de pu�etazo solo puede usarse un n�mero limitado de veces
                if (contador_puetazo > 0) {
                    heroe.da�o = ataques[pu�etazo];
                    contador_puetazo--;
                }
                else {
                    heroe.da�o = ataques[espada];
                }
                enemigo.vida -= heroe.da�o;
            }
            else {
                heroe.da�o = ataques[espada];
                enemigo2.vida -= heroe.da�o;
            }
        }

        // Mostramos el estado del juego
        printf("El h�roe tiene %d de vida.\n", heroe.vida);
        printf("El enemigo 1 tiene %d de vida.\n", enemigo.vida);
        printf("El enemigo 2 tiene %d de vida.\n", enemigo2.vida);
    }

    // El juego ha terminado
    if (heroe.vivo) {
        printf("�Has ganado!");
    }
    else {
        printf("�Has perdido!");
    }

    return 0;
}