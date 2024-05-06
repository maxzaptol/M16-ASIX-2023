#pragma once
#include <iostream>

using namespace std;

class Lancha

{
private:
    std::string nombrelancha;
    int vel;
    int distanciaRecorrida;
    int nitro;

public:
    Lancha(std::string nombre);

    
    std::string getnombrelancha();
    int getVel();
    int getDistanciaRecorrida();
    bool getNitro();

  
    void setnombrelancha(std::string nombre);
    void setVel(int velocidad);
    void setDistanciaRecorrida(int distancia);
    void setNitro(int nitro);

  
    void usarNitro();
    void calcularDistancia();
    int lanzarDado();

};

