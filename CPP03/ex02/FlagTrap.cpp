#include "Flagtrap.hpp"

void FlagTrap::highFiveGuys(){std::cout<<this->getName() << " said: Wanna high five guys ?!?\n";}
FlagTrap::~FlagTrap(){std::cout << this->getName() << " activated his self destruct protocole\n";}
FlagTrap::FlagTrap(){
	this->setHitPoint(100);
	this->setEnergyPoint(100);
	this->setAttackDamage(30);
	this->setName("Jerry");
}
FlagTrap::FlagTrap(std::string name){
	this->setHitPoint(100);
	this->setEnergyPoint(100);
	this->setAttackDamage(30);
	this->setName(name);
}