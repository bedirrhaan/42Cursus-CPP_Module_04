#include "Cat.hpp"

Cat::Cat()
{
	std::cout << "Cat Constructor Called" << std::endl;
	setType("Cat");
}

Cat::~Cat()
{
	std::cout << "Cat Destructor Called" << std::endl;
}

Cat::Cat(const Cat& copy)
{
	*this = copy;
}

Cat& Cat::operator=(const Cat& copy)
{
	if (this != &copy)
		*this = copy;
	return (*this);
}

void	Cat::makeSound()
{
	std::cout << "Meooow" << std::endl;
}
