#include <iostream>
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int	main()
{
	// Pointer tests (Polymorphic)
	std::cout << "\033[1;34mPointer tests (Polymorphic)\033[0m" << std::endl;
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	std::cout << meta->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();

	// Reference tests (Polymorphic)
	std::cout << "\033[1;34mReference tests (Polymorphic)\033[0m" << std::endl;
	const Animal& k = *meta;
	const Animal& l = *j;
	const Animal& m = *i;

	std::cout << l.getType() << " " << std::endl;
	std::cout << m.getType() << " " << std::endl;
	std::cout << k.getType() << " " << std::endl;
	m.makeSound();
	l.makeSound();
	k.makeSound();

	delete meta;
	delete j;
	delete i;

	// Base tests (Non-Polymorphic)
	std::cout << "\033[1;34mBase tests (Non-Polymorphic)\033[0m" << std::endl;
	const Animal d = Dog();
	const Animal c = Cat();

	std::cout << d.getType() << " " << std::endl;
	std::cout << c.getType() << " " << std::endl;
	d.makeSound();
	c.makeSound();

	// WrongAnimal tests (Non-Polymorphic)
	std::cout << "\033[1;34mWrongAnimal tests (Non-Polymorphic)\033[0m" << std::endl;
	const WrongAnimal* wi = new WrongCat();

	std::cout << wi->getType() << " " << std::endl;
	wi->makeSound();

	delete wi;
	return 0;
}
