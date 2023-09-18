#pragma once

#include "Animal.hpp"

class Cat: public Animal
{
private:
	/* data */
public:
	Cat(); // Default constructor
	Cat(const Cat &src); // Copy constructor
	~Cat(); // Destructor
	Cat	&operator=(const Cat &src); // Assignment operator

	void	makeSound() const;
};
