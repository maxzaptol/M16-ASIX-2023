#include "Personaje.h"
#include "EnemigoFinal.h"
#pragma once
#include <iostream>

Personaje::Personaje(int pHp, std::string pName, int pAttack, int pDefense) {
	hp = pHp;
	name = pName;
	attack = pAttack;
	defense = pDefense;
}



int Personaje::getHp() {
	return hp;
}

std::string Personaje::getName() {
	return name;
}

int Personaje::getAttack() {
	return attack;
}

int Personaje::getDefense() {
	return defense;
}

void Personaje::setHp(int pHp)
{
}

void Personaje::setName(std::string pName)
{

}

void Personaje::setAttack(int pAttack)
{

}

void Personaje::setDefense(int pDefense)
{

}

void Personaje::printStatus() {
	std::cout << "Te llamas " << getName() << " y te queda de vida " << getHp() << std::endl;
}
