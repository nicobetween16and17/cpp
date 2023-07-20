#include "Animal.hpp"

void Animal::makeSound() const{
	std::cout << "Animal like sound\n";
}

std::string Animal::getType() const{
	return "Animal";
}

Animal::~Animal(){std::cout<<"Animal died\n";}