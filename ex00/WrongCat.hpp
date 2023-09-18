#pragma once

#include "WrongAnimal.hpp"

class WrongCat: public WrongAnimal
{
private:
	/* data */
public:
	WrongCat(); // Default constructor
	WrongCat(const WrongCat &src); // Copy constructor
	~WrongCat(); // Destructor
	WrongCat	&operator=(const WrongCat &src); // Assignment operator

	void	makeSound() const;
};
