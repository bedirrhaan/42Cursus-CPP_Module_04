#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP
# include "WrongAnimal.hpp"
# include <iostream>

class WrongCat : public WrongAnimal
{
	public:
		WrongCat();
		WrongCat(WrongCat const &a);
		WrongCat &operator=(WrongCat const &a);
		~WrongCat();

		void makeSound() const;
};

#endif
