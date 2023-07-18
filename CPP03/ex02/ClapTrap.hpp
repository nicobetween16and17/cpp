#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP
#include <iostream>
class ClapTrap{

private:
	std::string _name;
	unsigned int _hit_point;
	unsigned int _energy_point;
	unsigned int _attack_damage;
public:
	ClapTrap(void);
	ClapTrap(std::string name);
	~ClapTrap(void);
	ClapTrap(const ClapTrap &c);
	ClapTrap &operator=(const ClapTrap& c);
	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	void setName(std::string name);
	void setHitPoint(unsigned int amount);
	void setEnergyPoint(unsigned int amount);
	void setAttackDamage(unsigned int amount);
	std::string getName(void);
	unsigned int getAttackDamage(void);
	unsigned int getHitPoint(void);
	unsigned int getEnergyPoint(void);
};


#endif