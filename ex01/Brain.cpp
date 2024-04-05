#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain Constructor Called" << std::endl;
	for (int i = 0; i < 100; i++)
		ideas[i] = "";
}

Brain::~Brain()
{
	std::cout << "Brain Destructor Called" << std::endl;
}

Brain::Brain(const Brain& copy)
{
	for (int i = 0; i < 100; i++)
		ideas[i] = copy.ideas[i];
}

Brain& Brain::operator=(const Brain& copy)
{
	if (this != &copy)
	{
		for (int i = 0; i < 100; i++)
			ideas[i] = copy.ideas[i];
	}
	return (*this);
}

void	Brain::setIdea(int i, const std::string newIdea)
{
	ideas[i] = newIdea;
}

std::string Brain::getIdea(int i) const
{
	return (ideas[i]);
}
