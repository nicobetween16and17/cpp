#include "Cat.hpp"

void Cat::makeSound() const{
	std::cout << "Cat goes mew mew\n";
}

std::string Cat::getType() const{
	return "Cat";
}

Cat::~Cat()
{
	std::cout<<"Cat died\n";
}