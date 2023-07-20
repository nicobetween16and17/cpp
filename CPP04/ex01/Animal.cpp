#include "Animal.hpp"

void Animal::makeSound() const{
	std::cout << "Animal like sound\n";
}

std::string Animal::getType() const{
	return "Animal";
}

Animal::~Animal(){std::cout<<"Animal died\n";}

Brain* Animal::getBrain(){
	return this->_brain;
}

void Animal::initBrain(){
	this->_brain = new Brain();
}

void Animal::deleteBrain(){
	delete this->_brain;
}