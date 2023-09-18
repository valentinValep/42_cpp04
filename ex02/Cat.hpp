#pragma once

#include "AAnimal.hpp"
#include "Brain.hpp"

class Cat: public AAnimal
{
private:
	Brain	*_brain;
public:
	Cat(); // Default constructor
	Cat(const Cat &src); // Copy constructor
	~Cat(); // Destructor
	Cat	&operator=(const Cat &src); // Assignment operator

	void	makeSound() const;
};
