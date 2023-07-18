#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void)
{
	this->setName("Serena");
	this->setHitPoint(100);
	this->setEnergyPoint(50);
	this->setAttackDamage(20);
}
ScavTrap::~ScavTrap(){std::cout<< this->getName() << " is destroyed\n";}
ScavTrap::ScavTrap(std::string name)
{
	this->setName(name);
	this->setHitPoint(100);
	this->setEnergyPoint(50);
	this->setAttackDamage(20);
}

void ScavTrap::guardGate(void){
	std::cout << this->getName() << " is now in guard mode\n";
}