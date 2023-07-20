#include "Brain.hpp"

Brain::Brain()
{
	this->_current_idea = 0;
}
Brain::~Brain(){
	std::cout << "Brain damaged, that animal tried to comprehend c++\n";
}
int Brain::getIdea(){
	return (this->_current_idea);
}

void Brain::setIdea(int value)
{
	if (value > 99)
		value -= 100;
	this->_current_idea = value;
}

void Brain::addIdea(std::string idea){
	this->_ideas[this->_current_idea] = idea;
	this->setIdea(this->getIdea() + 1);
}

std::string Brain::getThought(int index){
	if (index > 100)
		index = index % 100;
	return this->_ideas[index];
}