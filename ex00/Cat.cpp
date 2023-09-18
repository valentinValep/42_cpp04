#include <iostream>
#include "Cat.hpp"

Cat::Cat(): Animal()
{
	std::cout << "Cat default constructor called" << std::endl;
	this->_type = "Cat";
}

Cat::Cat(const Cat &src): Animal(src)
{
	std::cout << "Cat copy constructor called" << std::endl;
	*this = src;
}

Cat::~Cat()
{
	std::cout << "Cat destructor called" << std::endl;
}

Cat	&Cat::operator=(const Cat &src)
{
	std::cout << "Cat assignment operator called" << std::endl;
	if (this == &src)
		return (*this);
	Animal::operator=(src);
	return (*this);
}

void	Cat::makeSound() const
{
	std::cout << "Meow" << std::endl;
}
