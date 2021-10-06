#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main( void )
{
	Cat *someCat = new Cat("MurrMeow");
	someCat->evilGenius().setIdea("eat", 3);
	someCat->evilGenius().setIdea("sleep", 4);
	someCat->evilGenius().setIdea("eat one more time", 5);
	someCat->evilGenius().setIdea("sleep, probably", 6);
	someCat->makeSound();
	// Animal *someAmimal = new Animal("Animal")

	Dog *someDog = new Dog("BarkBark");
	someDog->evilGenius().setIdea("eat", 10);
	someDog->evilGenius().setIdea("play", 11);
	someDog->evilGenius().setIdea("bark", 12);
	someDog->makeSound();
	delete someDog;
	delete someCat;
}