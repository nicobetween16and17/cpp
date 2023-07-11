#include "Zombie.hpp"

int main(void)
{
	Zombie *steve = newZombie("Steve");
	steve->announce();
	randomChump("Desuka");
	delete steve;
	std::cout << "HEAP is being cleared\n";
}