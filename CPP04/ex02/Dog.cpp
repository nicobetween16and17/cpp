#include "Dog.hpp"

void Dog::makeSound() const{
	std::cout << "Dogs goes bark bark\n";
}

std::string Dog::getType() const{
	return "Dog";
}
Dog::Dog(){
	this->initBrain();
	std::cout << "A dog is born\n";
}
Dog::~Dog()
{
	std::cout << "Dog died\n";
	this->deleteBrain();
}