#include "Zombie.hpp"

int	main(void)
{
	Zombie *gang = zombieHorde(19, "Agent Smith");
	for (int i = 0; i < 19; i++)
	{
		gang[i].announce();
	}
	delete [] gang;
}