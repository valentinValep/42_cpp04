#pragma once

#include "AMateria.hpp"

class Ice: public AMateria
{
private:
	/* data */
public:
	Ice(); // Default constructor
	Ice(const Ice &src); // Copy constructor
	~Ice(); // Destructor
	Ice	&operator=(const Ice &src); // Assignment operator

	AMateria	*clone() const;
	void		use(ICharacter& target);
};
