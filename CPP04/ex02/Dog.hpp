#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

class Dog: public Animal{
private:
public:
	void makeSound(void) const;
	std::string getType(void) const;
	~Dog();
	Dog();
};

#endif