#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

std::string itoa(int a)
{
	std::string ss="";   //create empty string
	while(a)
	{
		int x=a%10;
		a/=10;
		char i='0';
		i=i+x;
		ss=i+ss;      //append new character at the front of the string!
	}
	return ss;
}

int main()
{
	//const Animal* meta = new Animal();
	Animal* dog = new Dog();
	Animal* cat = new Cat();
	std::cout << cat->getType() << " type" << std::endl;
	std::cout << dog->getType() << " type" << std::endl;
	cat->makeSound(); //will output the cat sound!
	dog->makeSound();
	for (int i = 0; i < 1000; ++i) {
		dog->getBrain()->addIdea(itoa(i).append("e nonos"));
	}
	for (int i = 0; i < 1000; ++i) {
		cat->getBrain()->addIdea(itoa(i).append("e murder"));
	}

	std::cout << dog->getType() << " thinks of " << dog->getBrain()->getThought(13) << std::endl;
	std::cout << cat->getType() << " thinks of " << cat->getBrain()->getThought(59) << std::endl;
	//meta->makeSound();
	//delete meta;
	delete dog;
	delete cat;
	return 0;
}