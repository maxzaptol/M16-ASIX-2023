#include <iostream>

using namespace std;

// Definición de los personajes
struct personaje {
    char nombre[20];
    int daño;
    int vida;
    int vivo;
};

// Definición de los tres tipos de ataque del héroe
enum ataque {
    espada,
    magia,
    puñetazo
};

// Asignación de un daño a cada ataque
int ataques[3] = { 10, 15, 5 };

// Definición de un contador para el número de veces que se puede usar el ataque de puñetazo
int contador_puetazo = 3;

int main()
{
    // Definición de los personajes
    struct personaje heroe = { "El héroe", 10, 500, 1 };
    struct personaje enemigo = { "El enemigo", 5, 200, 1 };
    struct personaje enemigo2 = { "El segundo enemigo", 5, 200, 1 };

    // Bucle del juego
    while (heroe.vivo && enemigo.vivo && enemigo2.vivo) {
        // Turno del enemigo
        if (enemigo.vivo) {
            // Hace daño al héroe
            enemigo.daño = rand() % 10 + 1;
            heroe.vida -= enemigo.daño;
        }

        if (enemigo2.vivo) {
            // Hace daño al héroe
            enemigo2.daño = rand() % 10 + 1;
            heroe.vida -= enemigo2.daño;
        }

        // Turno del héroe
        if (heroe.vivo) {
            // El héroe elige a qué enemigo atacar
            printf("¿A qué enemigo quieres atacar? (1-Enemigo 1, 2-Enemigo 2): ");
            int enemigo_a_atacar;
            scanf("%d", &enemigo_a_atacar);

            // Hace daño al enemigo elegido
            if (enemigo_a_atacar == 1) {
                // El ataque de puñetazo solo puede usarse un número limitado de veces
                if (contador_puetazo > 0) {
                    heroe.daño = ataques[puñetazo];
                    contador_puetazo--;
                }
                else {
                    heroe.daño = ataques[espada];
                }
                enemigo.vida -= heroe.daño;
            }
            else {
                heroe.daño = ataques[espada];
                enemigo2.vida -= heroe.daño;
            }
        }

        // Mostramos el estado del juego
        printf("El héroe tiene %d de vida.\n", heroe.vida);
        printf("El enemigo 1 tiene %d de vida.\n", enemigo.vida);
        printf("El enemigo 2 tiene %d de vida.\n", enemigo2.vida);
    }

    // El juego ha terminado
    if (heroe.vivo) {
        printf("¡Has ganado!");
    }
    else {
        printf("¡Has perdido!");
    }

    return 0;
}