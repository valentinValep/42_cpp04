#pragma once

#include "AMateria.hpp"

class Cure: public AMateria
{
private:
	/* data */
public:
	Cure(); // Default constructor
	Cure(const Cure &src); // Copy constructor
	~Cure(); // Destructor
	Cure	&operator=(const Cure &src); // Assignment operator

	AMateria	*clone() const;
	void		use(ICharacter& target);
};
