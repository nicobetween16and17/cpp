#ifndef FLAGTRAP_HPP
#define FLAGTRAP_HPP

#include "ScavTrap.hpp"
class FlagTrap : public ClapTrap
{
private:
	;
public:
	~FlagTrap();
	FlagTrap();
	FlagTrap(std::string name);
	void highFiveGuys();
};
#endif