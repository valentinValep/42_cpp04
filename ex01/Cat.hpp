#pragma once

#include "Animal.hpp"
#include "Brain.hpp"

class Cat: public Animal
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
