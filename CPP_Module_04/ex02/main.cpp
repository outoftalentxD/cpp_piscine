#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main( void )
{
	Cat *someCat = new Cat("MurrMeow");
	someCat->setIdea("eat", 3);
	someCat->setIdea("sleep", 4);
	someCat->setIdea("eat one more time", 5);
	someCat->setIdea("sleep, probably", 6);
	someCat->makeSound();
	someCat->printIdeas(3, 7);
	// Animal *someAmimal = new Animal("Animal")

	Dog *someDog = new Dog("BarkBark");
	someDog->setIdea("eat", 10);
	someDog->setIdea("play", 11);
	someDog->setIdea("bark", 12);
	someDog->makeSound();
	someDog->printIdeas(10, 13);
	delete someDog;
	delete someCat;
}