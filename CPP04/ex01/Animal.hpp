#ifndef ANIMAL_HPP
#define ANIMAL_HPP
#include <iostream>
#include "Brain.hpp"
class Animal
{
private:
	std::string _name;
	Brain *_brain;
public:
	virtual void makeSound() const;
	virtual std::string getType(void) const;
	virtual ~Animal();
	Brain *getBrain(void);
	void initBrain(void);
	void deleteBrain(void);
};

#endif