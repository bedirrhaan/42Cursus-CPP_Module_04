#include "Cat.hpp"

Cat::Cat()
{
	std::cout << "Cat Constructor Called" << std::endl;
	brain = new Brain();
	setType("Cat");
}

Cat::~Cat()
{
	std::cout << "Cat Destructor Called" << std::endl;
}

Cat::Cat(const Cat& copy) : Animal(copy)
{
	brain = new Brain(*copy.brain);
	setType(copy.getType());
}

Cat& Cat::operator=(const Cat& copy)
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

void	Cat::makeSound()
{
	std::cout << "Meooow" << std::endl;
}
