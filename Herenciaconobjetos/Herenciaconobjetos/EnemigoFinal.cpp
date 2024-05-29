#include "EnemigoFinal.h"


EnemigoFinal::EnemigoFinal(int pHp, std::string pName, int pAttack, int pDefense, int fireAttack, int frozenAttack)
{
	hp = pHp;
	name = pName;
	attack = pAttack;
	defense = pDefense;
	FireAttack = fireAttack;
	FrozenAttack = frozenAttack;
}




int EnemigoFinal::getHp() {
	return hp;
}
std::string EnemigoFinal::getName() {
	return name;
}

int EnemigoFinal::getAttack() {
	return attack;
}

int EnemigoFinal::getDefense() {
	return defense;
}

int EnemigoFinal::getFireAttack()
{
	return FireAttack;
}

int EnemigoFinal::getFrozenAttack()
{
	return FrozenAttack;
}

void EnemigoFinal::setHp(int pHp)
{
}

void EnemigoFinal::setName(std::string pName)
{

}

void EnemigoFinal::setAttack(int pAttack)
{

}

void EnemigoFinal::setDefense(int pDefense)
{

}

void EnemigoFinal::setFireAttack(int pFireAttack)
{
}

void EnemigoFinal::setFrozenAttack(int pFrozenAttack)
{
}

void EnemigoFinal::printStatus() {
	std::cout << "Tu enemigo se llama " << getName() << " y le queda de vida " << getHp() << std::endl;
}