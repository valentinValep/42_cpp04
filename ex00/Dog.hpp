#pragma once

#include "Animal.hpp"

class Dog: public Animal
{
private:
	/* data */
public:
	Dog(); // Default constructor
	Dog(const Dog &src); // Copy constructor
	~Dog(); // Destructor
	Dog	&operator=(const Dog &src); // Assignment operator

	void	makeSound() const;
};
