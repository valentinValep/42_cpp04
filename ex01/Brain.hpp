#pragma once

#include <string>

class Brain
{
private:
	std::string	_ideas[100];
public:
	Brain(); // Default constructor
	Brain(const Brain &src); // Copy constructor
	~Brain(); // Destructor
	Brain	&operator=(const Brain &src); // Assignment operator
};
