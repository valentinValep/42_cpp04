#pragma once

#include <string>

class Animal
{
private:
	/* data */
protected:
	std::string	_type;
public:
	Animal(); // Default constructor
	Animal(const Animal &src); // Copy constructor
	virtual ~Animal(); // Destructor
	Animal	&operator=(const Animal &src); // Assignment operator

	std::string	getType() const;

	virtual void	makeSound() const;
};
