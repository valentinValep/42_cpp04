#pragma once

#include <string>
#include "ICharacter.hpp"
#include "AMateria.hpp"

class Character: public ICharacter
{
private:
	std::string	_name;
	AMateria	*_inventory[4];
public:
	Character(); // Default constructor
	Character(const Character &src); // Copy constructor
	Character(std::string const &name);
	~Character(); // Destructor
	Character	&operator=(const Character &src); // Assignment operator

	std::string const 	&getName() const;
	void				equip(AMateria *m);
	void				unequip(int idx);
	void				use(int idx, ICharacter& target);
};
