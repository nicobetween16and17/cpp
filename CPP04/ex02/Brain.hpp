#ifndef BRAIN_HPP
#define BRAIN_HPP
#include <iostream>
class Brain
{
private:
	std::string _ideas[100];
	int _current_idea;
public:
	Brain();
	~Brain();
	void addIdea(std::string idea);
	int getIdea(void);
	void setIdea(int value);
	std::string getThought(int index);
};


#endif