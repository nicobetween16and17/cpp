#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void): _name("boobafet"), _hit_point(10), _energy_point(10), _attack_damage(0)
{
	std::cout << "random claptrap created\n";
}
ClapTrap::ClapTrap(std::string name): _name(name), _hit_point(10), _energy_point(10), _attack_damage(0)
{
	std::cout << "claptrap " << this->_name <<" created\n";
}
ClapTrap::~ClapTrap() {std::cout << "claptrap " << this->_name <<" destroyed\n";}

void ClapTrap::attack(const std::string &target)
{
	if (this->_energy_point > 0)
		std::cout << "Claptrap " << this->_name << " attacks " << target <<\
	"causing "<< this->_attack_damage << " damage\n";
	this->_energy_point--;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "ClapTrap " << _name << " takes " << amount << " damage!\n";
	if (this->_hit_point <= amount)
		std::cout << "ClapTrap " << _name << " is dead!\n";
	else
		this->_hit_point -= amount;
}


void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_energy_point <= amount)
		std::cout << "ClapTrap " << _name << " is out of energy!\n";
	else
	{
		std::cout << "ClapTrap " << _name << " repairs " << amount << " hit points!\n";
		this->_energy_point -= amount;
	}

}

ClapTrap &ClapTrap::operator=(const ClapTrap &c) {
	if (this != &c)
	{
		this->_attack_damage = c._attack_damage;
		this->_name = c._name;
		this->_hit_point = c._hit_point;
		this->_energy_point = c._energy_point;
	}
	return *this;
}

void ClapTrap::setAttackDamage(unsigned int amount){this->_attack_damage = amount;}
void ClapTrap::setEnergyPoint(unsigned int amount){this->_energy_point = amount;}
void ClapTrap::setHitPoint(unsigned int amount){this->_hit_point = amount;}
void ClapTrap::setName(std::string name){this->_name = name;}
std::string ClapTrap::getName(void){return this->_name;}
unsigned int ClapTrap::getAttackDamage(){return this->_attack_damage;}
unsigned int ClapTrap::getEnergyPoint(){return this->_energy_point;}
unsigned int ClapTrap::getHitPoint(){return this->_hit_point;}