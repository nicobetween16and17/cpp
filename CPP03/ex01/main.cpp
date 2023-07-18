#include "ScavTrap.hpp"

int main( void )
{
	ClapTrap c1("Ash");
	ClapTrap c2;
	ScavTrap s1;
	ScavTrap s2("Willy");

	s2.guardGate();
	c2.attack("Ash");
	c1.takeDamage(2);
	c1.beRepaired(2);
	c1.takeDamage(10);
	c1.beRepaired(8);
	c1.beRepaired(1);
	return EXIT_SUCCESS;
}