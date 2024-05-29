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

	EnemigoFinal(int pHp,
		std::string pName,
		int pAttack,
		int pDefense,
		int fireAttack,
		int frozenAttack);

	//Getters
		int getHp();
		std::string getName();
		int getAttack();
		int getDefense();
		int getFireAttack();
		int getFrozenAttack();

		//Setters
		void setHp(int pHp);
		void setName(std::string pName);
		void setAttack(int pAttack);
		void setDefense(int pDefense);
		void setFireAttack(int pFireAttack);
		void setFrozenAttack(int pFrozenAttack);
		void printStatus();


};