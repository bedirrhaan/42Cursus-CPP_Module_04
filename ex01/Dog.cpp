#include "Dog.hpp"

Dog::Dog()
{
	std::cout << "Dog Constructor Called" << std::endl;

	brain = new Brain();
	setType("Dog");
}

Dog::~Dog()
{
	std::cout << "Dog Destructor Called" << std::endl;
}

Dog::Dog(const Dog& copy)
{
	brain = new Brain(*copy.brain);
	setType(copy.getType());
}

Dog& Dog::operator=(const Dog& copy)
{
	if (this != &copy)
	{
		Animal::operator=(copy);
		delete brain;
		brain = new Brain(*copy.brain);
		setType(copy.getType());
	}
	return (*this);
}

void	Dog::makeSound()
{
	std::cout << "Hav" << std::endl;
}
