#include "Zombie.hpp"

Zombie::Zombie(std::string name) {
	this->_name = name;
}

Zombie::~Zombie() {
	std::cout << "Zombie " << this->_name << " has been destroyed." << std::endl;
}

void    Zombie::announce( void ) {
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::Zombie(void)
{
	this->_name = "blank";
	std::cout << "blank zombie" << this->_name << "has been created" << std::endl;
}

void	Zombie::setName(std::string name)
{
	this->_name = name;
}