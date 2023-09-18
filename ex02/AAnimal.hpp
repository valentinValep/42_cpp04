#pragma once

#include <string>

class AAnimal
{
private:
	/* data */
protected:
	std::string	_type;
public:
	AAnimal(); // Default constructor
	AAnimal(const AAnimal &src); // Copy constructor
	virtual ~AAnimal(); // Destructor
	AAnimal	&operator=(const AAnimal &src); // Assignment operator

	std::string	getType() const;

	virtual void	makeSound() const = 0;
};
