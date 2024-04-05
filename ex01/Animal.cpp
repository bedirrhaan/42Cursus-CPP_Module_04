#include "Animal.hpp"

Animal::Animal()
{
	std::cout << "Animal Constructor Called" << std::endl;
}

Animal::~Animal()
{
	std::cout << "Animal Destructor Called" << std::endl;
}

Animal::Animal(const Animal& copy)
{
	*this = copy;
}

const Animal&	Animal::operator=(const Animal &copy) const
{
	if (this != &copy)
		*this = copy;
	return (*this);
}

void	Animal::setType(const std::string newType)
{
	type = newType;
}

const std::string& Animal::getType(void) const
{
	return (type);
}

void	Animal::makeSound(void)
{
	std::cout << "Animal sound" << std::endl;
}
