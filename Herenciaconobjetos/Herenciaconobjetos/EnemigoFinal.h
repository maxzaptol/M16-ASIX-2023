#pragma once
#include "Personaje.h"
#include <iostream>

using namespace std;

class EnemigoFinal : public Personaje 
{
private:
	int FireAttack;
	int FrozenAttack;

public:
	//Constructor con herencia
	EnemigoFinal(int pHp,
		std::string pName,
		int pAttack,
		int pDefense,
		int fireAttack,
		int frozenAttack);



	

	//Getters
		int getFireAttack();
		int getFrozenAttack();

		//Setters

		void setFireAttack(int pFireAttack);
		void setFrozenAttack(int pFrozenAttack);

		//metodos propios
		void printStatus();


};