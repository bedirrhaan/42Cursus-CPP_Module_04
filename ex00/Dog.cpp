#include "Dog.hpp"

Dog::Dog()
{
	std::cout << "Dog Constructor Called" << std::endl;
	setType("Dog");
}

Dog::~Dog()
{
	std::cout << "Dog Destructor Called" << std::endl;
}

Dog::Dog(const Dog& copy)
{
	*this = copy;
}

Dog& Dog::operator=(const Dog& copy)
{
	if (this != &copy)
		*this = copy;
	return (*this);
}

void	Dog::makeSound()
{
	std::cout << "Hav" << std::endl;
}
