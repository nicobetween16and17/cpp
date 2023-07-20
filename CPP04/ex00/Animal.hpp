#ifndef ANIMAL_HPP
#define ANIMAL_HPP
#include <iostream>
class Animal
{
private:
	std::string _name;
public:
	virtual void makeSound() const;
	virtual std::string getType(void) const;
	virtual ~Animal();
};

#endif