#pragma once

#include <iostream>
#include <string>
#include "ICharacter.hpp"

class ICharacter;

class AMateria
{
protected:
	std::string	_type;
public:
	AMateria(); // Default constructor
	AMateria(const AMateria &src); // Copy constructor
	AMateria(std::string const &type);
	virtual ~AMateria(); // Destructor
	AMateria	&operator=(const AMateria &src); // Assignment operator

	std::string const	&getType() const;

	virtual AMateria* clone() const = 0;
	virtual void use(ICharacter& target);
};
