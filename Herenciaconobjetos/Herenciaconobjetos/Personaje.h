#pragma once
#include <iostream>

class Personaje
{


public:
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

	//metodos propios
	void printStatus();
};