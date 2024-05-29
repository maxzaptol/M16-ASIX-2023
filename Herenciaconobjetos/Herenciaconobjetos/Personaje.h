#pragma once
#include <iostream>
#include "EnemigoFinal.h"

class Personaje
{


public:
	int hp;
	std::string name;
	int attack;
	int defense;
	//Constructor
	Personaje(int pHp, std::string pName, int pAttack, int pDefense);
	//Getters
	int getHp();
	std::string getName();
	int getAttack();
	int getDefense();
	//Setters
	void setHp(int pHp);
	void setName(std::string pName);
	void setAttack(int pAttack);
	void setDefense(int pDefense);
	void printStatus();
};