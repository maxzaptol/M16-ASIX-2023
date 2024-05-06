#include "Lancha.h"


Lancha::Lancha(std::string nombre) {
    nombrelancha = nombre;
    vel = 0;
    distanciaRecorrida = 0;
    nitro = 1;
}

bool Lancha::getNitro() { return nitro; }

std::string Lancha::getnombrelancha() {
    return nombrelancha;
}

int Lancha::getVel() {
    return vel;
}

int Lancha::getDistanciaRecorrida() {
    return distanciaRecorrida;
}

void Lancha::setnombrelancha(std::string nombre) {
    nombrelancha = nombre;
}

void Lancha::setVel(int vel) {
    vel = vel;
}

void Lancha::setDistanciaRecorrida(int distancia) {
    distanciaRecorrida = distancia;
}

void Lancha::setNitro(int n) {
    nitro = n;
}

void Lancha::usarNitro() {
    if (nitro) {
        srand(time(0));
        int resultado = rand() % 2;
        if (resultado == 0) {
            vel /= 2;
        }
        else {
            vel *= 2;

        }
        nitro = false;
    }
}

void Lancha::calcularDistancia() {
    distanciaRecorrida += vel * 100;
}

int Lancha::lanzarDado() {
    int dado = rand() % 6;
    vel += dado;
    return dado;
}

