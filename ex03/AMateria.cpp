#include "AMateria.hpp"

AMateria::AMateria(): _type("default material")
{
	// Default constructor
}

AMateria::AMateria(const AMateria &src): _type(src._type)
{
	*this = src; // Assignment operator
}

AMateria::AMateria(std::string const &type): _type(type)
{
	// Constructor
}

AMateria::~AMateria()
{
	// Destructor
}

AMateria	&AMateria::operator=(const AMateria &src)
{
	if (this == &src)
		return (*this);
	this->_type = src._type;
	return (*this);
}

void AMateria::use(ICharacter &target)
{
	std::cout << "* uses " << this->_type << " on " << target.getName() << " *" << std::endl;
}
