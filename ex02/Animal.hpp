#ifndef ANIMAL_HPP
# define ANIMAL_HPP
# include <iostream>

class Animal
{
	protected:
		std::string type;
	public:
		Animal();
		Animal(const Animal& copy);
		const Animal& operator=(const Animal& copy) const;
		virtual ~Animal();

		void				setType(const std::string newType);
		const std::string&	getType(void) const;
		virtual void		makeSound(void) const = 0;
};

#endif
