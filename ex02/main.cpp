#include <iostream>
#include "AAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

#define MAX_ANIMALS 2

int	main()
{
	AAnimal* animals[MAX_ANIMALS];
	for (int i = 0; i < MAX_ANIMALS; i++)
	{
		if (i % 2 == 0)
			animals[i] = new Dog();
		else
			animals[i] = new Cat();
	}

	if (MAX_ANIMALS > 0)
	{
		AAnimal* copy = new Dog(*(Dog *)animals[0]);
		std::cout << copy->getType() << std::endl;
		copy->makeSound();
		delete copy;
	}

	for (int i = 0; i < MAX_ANIMALS; i++)
	{
		delete animals[i];
	}

	// Pointer tests (Polymorphic)
	std::cout << "\033[1;34mPointer tests (Polymorphic)\033[0m" << std::endl;
	const AAnimal* j = new Dog();
	const AAnimal* i = new Cat();

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();

	// Reference tests (Polymorphic)
	std::cout << "\033[1;34mReference tests (Polymorphic)\033[0m" << std::endl;
	const AAnimal& l = *j;
	const AAnimal& m = *i;

	std::cout << l.getType() << " " << std::endl;
	std::cout << m.getType() << " " << std::endl;
	m.makeSound();
	l.makeSound();

	delete j;
	delete i;

	//// Base tests (Non-Polymorphic)
	//std::cout << "\033[1;34mBase tests (Non-Polymorphic)\033[0m" << std::endl;
	//const AAnimal d = Dog();
	//const AAnimal c = Cat();

	//std::cout << d.getType() << " " << std::endl;
	//std::cout << c.getType() << " " << std::endl;
	//d.makeSound();
	//c.makeSound();

	//// WrongAnimal tests (Non-Polymorphic)
	//std::cout << "\033[1;34mWrongAnimal tests (Non-Polymorphic)\033[0m" << std::endl;
	//const WrongAnimal* wi = new WrongCat();

	//std::cout << wi->getType() << " " << std::endl;
	//wi->makeSound();

	//delete wi;
	return 0;
}
