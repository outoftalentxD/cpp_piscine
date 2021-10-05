#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

void right( void )
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();
}

void wrong( void )
{
	const WrongAnimal* meta = new WrongAnimal();
	const WrongAnimal* i = new WrongCat();
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the animal sound!
	meta->makeSound();
}

int main( void )
{
	std::cout << "Right:\n";
	right();
	std::cout << "--------------------------------" << std::endl;
	std::cout << "Wrong:\n";
	wrong();
	std::cout << "--------------------------------" << std::endl;
}