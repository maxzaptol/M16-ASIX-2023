#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
	int total_jugador = 0;
	int total_croupier = 0;

	const char* palos[] = { "Corazones", "Diamantes", "Treboles", "Picas" };
	const char* valores[] = { "As", "2", "3", "4", "5", "6", "7", "8", "9", "10", "Jota", "Reina", "Rey" };


	srand(static_cast<unsigned int>(time(nullptr)));

	for (int i = 0; i < 2; ++i) {
		int paloAleatorio = rand() % 4;
		const char* paloSeleccionado = palos[paloAleatorio];
		int numeroAleatorio = rand() % 13;
		const char* valorSeleccionado = valores[numeroAleatorio];


		int valorCarta = 0;

		if (valorSeleccionado == "As") {

			cout << "Carta del jugador: " << valorSeleccionado << " de " << paloSeleccionado << endl;
			cout << "Quieres que el As valga 1 u 11? Ingresa 1 o 11: ";
			int eleccion;
			cin >> eleccion;


			if (eleccion == 1 || eleccion == 11) {
				valorCarta = eleccion;
			}
			else {
				cout << "Eleccion no valida. El As se contara como 1." << endl;
				valorCarta = 1;
			}
		}
		else if (valorSeleccionado == "Jota" || valorSeleccionado == "Reina" || valorSeleccionado == "Rey") {

			valorCarta = 10;
			cout << "Carta del jugador: " << valorSeleccionado << " de " << paloSeleccionado << endl;
		}
		else {

			valorCarta = atoi(valorSeleccionado);
			cout << "Carta del jugador: " << valorSeleccionado << " de " << paloSeleccionado << endl;
		}

		total_jugador += valorCarta;
	}

	cout << "Total del jugador: " << total_jugador << endl;


	char decision;
	while (total_jugador < 21) {
		cout << "Quieres pedir otra carta? (S/N): ";
		cin >> decision;

		if (decision == 'S' || decision == 's') {
			int paloAleatorio = rand() % 4;
			const char* paloSeleccionado = palos[paloAleatorio];
			int numeroAleatorio = rand() % 13;
			const char* valorSeleccionado = valores[numeroAleatorio];


			int valorCarta = 0;

			if (valorSeleccionado == "As") {

				cout << "Carta del jugador: " << valorSeleccionado << " de " << paloSeleccionado << endl;
				cout << "Quieres que el As valga 1 u 11? Ingresa 1 o 11: ";
				int eleccion;
				cin >> eleccion;


				if (eleccion == 1 || eleccion == 11) {
					valorCarta = eleccion;
				}
				else {
					cout << "Eleccion no valida. El As se contara como 1." << endl;
					valorCarta = 1;
				}
			}
			else if (valorSeleccionado == "Jota" || valorSeleccionado == "Reina" || valorSeleccionado == "Rey") {

				valorCarta = 10;
				cout << "Carta del jugador: " << valorSeleccionado << " de " << paloSeleccionado << endl;
			}
			else {

				valorCarta = atoi(valorSeleccionado);
				cout << "Carta del jugador: " << valorSeleccionado << " de " << paloSeleccionado << endl;
			}

			total_jugador += valorCarta;

			cout << "Total del jugador: " << total_jugador << endl;
		}
		else if (decision == 'N' || decision == 'n') {
			break;
		}
		else {
			cout << "Opcion no valida. Intentalo de nuevo." << endl;
		}
	}


	if (total_jugador > 21) {
		cout << "¡El jugador se paso de 21! La banca gana automaticamente." << endl;
		return 0;
	}


	cout << "Cartas del croupier:" << endl;
	while (total_croupier < 21) {
		int paloAleatorio = rand() % 4;
		const char* paloSeleccionado = palos[paloAleatorio];
		int numeroAleatorio = rand() % 13;
		const char* valorSeleccionado = valores[numeroAleatorio];


		int valorCarta = 0;

		if (valorSeleccionado == "As") {

			valorCarta = (total_croupier + 11 <= 21) ? 11 : 1;
		}
		else if (valorSeleccionado == "Jota" || valorSeleccionado == "Reina" || valorSeleccionado == "Rey") {

			valorCarta = 10;
			cout << "Carta del croupier: " << valorSeleccionado << " de " << paloSeleccionado << endl;
		}
		else {

			valorCarta = atoi(valorSeleccionado);
			cout << "Carta del croupier: " << valorSeleccionado << " de " << paloSeleccionado << endl;
		}

		total_croupier += valorCarta;
	}

	cout << "Total del croupier: " << total_croupier << endl;

	if (total_croupier > 21) {
		cout << "La banca se paso de 21! El jugador gana automaticamente." << endl;
		return 0;
	}

	if (total_jugador > total_croupier) {
		cout << "El jugador gana!" << endl;
	}
	else if (total_jugador == total_croupier) {
		cout << "Habeis conseguido los mismos puntos, asi que el jugador gana!" << endl;
	}
	else if (total_croupier > total_jugador) {
		cout << "La banca gana!" << endl;
	}
	return 0;
}