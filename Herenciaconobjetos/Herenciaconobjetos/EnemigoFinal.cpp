#include "EnemigoFinal.h"




EnemigoFinal::EnemigoFinal(int pHp, std::string pName, int pAttack, int pDefense, int fireAttack, int frozenAttack) : Personaje(pHp,pName,pAttack, pDefense)

{
	FireAttack = fireAttack;
	FrozenAttack = frozenAttack;
}







int EnemigoFinal::getFireAttack()
{
	return FireAttack;
}

int EnemigoFinal::getFrozenAttack()
{
	return FrozenAttack;
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