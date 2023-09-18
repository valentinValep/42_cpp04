#include <iostream>
#include "AAnimal.hpp"

AAnimal::AAnimal(): _type("AAnimal")
{
	std::cout << "AAnimal default constructor called" << std::endl;
}

AAnimal::AAnimal(const AAnimal &src): _type(src._type)
{
	std::cout << "AAnimal copy constructor called" << std::endl;
	*this = src;
}

AAnimal::~AAnimal()
{
	std::cout << "AAnimal destructor called" << std::endl;
}

AAnimal	&AAnimal::operator=(const AAnimal &src)
{
	std::cout << "AAnimal assignment operator called" << std::endl;
	if (this == &src)
		return (*this);
	_type = src._type;
	return (*this);
}

std::string	AAnimal::getType() const
{
	return (_type);
}
