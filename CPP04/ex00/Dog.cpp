#include "Dog.hpp"

void Dog::makeSound() const{
	std::cout << "Dogs goes bark bark\n";
}

std::string Dog::getType() const{
	return "Dog";
}

Dog::~Dog()
{
	std::cout << "dog died\n";
}