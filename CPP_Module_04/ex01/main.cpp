#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main( void )
{
	Animal *someAnimal = new Cat("Kitty");

	Cat *someCat = new Cat("MurrMeow");
	someCat->evilGenius().setIdea("eat", 3);
	someCat->evilGenius().setIdea("sleep", 4);
	someCat->evilGenius().setIdea("eat one more time", 5);
	someCat->evilGenius().setIdea("sleep, probably", 6);

	Dog *someDog = new Dog("BarkBark");
	someDog->evilGenius().setIdea("eat", 10);
	someDog->evilGenius().setIdea("play", 11);
	someDog->evilGenius().setIdea("bark", 12);
	Animal *otherAnimal = new Cat(*someCat);
	Animal *yetAnotherAnimal = new Dog (*someDog);
	delete someCat;
	delete someDog;

	otherAnimal->printIdeas(3, 6);
	yetAnotherAnimal->printIdeas(10, 13);
	delete otherAnimal;
	delete someAnimal;
}