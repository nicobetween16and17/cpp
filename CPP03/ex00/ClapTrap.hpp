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
};


#endif