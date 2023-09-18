#pragma once

#include "AAnimal.hpp"
#include "Brain.hpp"

class Dog: public AAnimal
{
private:
	Brain	*_brain;
public:
	Dog(); // Default constructor
	Dog(const Dog &src); // Copy constructor
	~Dog(); // Destructor
	Dog	&operator=(const Dog &src); // Assignment operator

	void	makeSound() const;
};
