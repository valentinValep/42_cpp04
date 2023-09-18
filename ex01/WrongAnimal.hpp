#pragma once

#include <string>

class WrongAnimal
{
private:
	/* data */
protected:
	std::string	_type;
public:
	WrongAnimal(); // Default constructor
	WrongAnimal(const WrongAnimal &src); // Copy constructor
	virtual ~WrongAnimal(); // Destructor
	WrongAnimal	&operator=(const WrongAnimal &src); // Assignment operator

	std::string	getType() const;

	void	makeSound() const;
};
