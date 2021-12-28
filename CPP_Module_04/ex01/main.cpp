#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main( void )
{
	std::cout << "Animal:\n";
	Animal *someAnimal = new Animal("idk who is that!");
	someAnimal->makeSound();
	someAnimal->setIdea("eat", 4);
	someAnimal->setIdea("sleep", 5);
	someAnimal->printIdeas(4, 6);
	delete someAnimal;

	std::cout << "\nCat:\n";
	someAnimal = new Cat("KittyCat");
	someAnimal->makeSound();
	someAnimal->setIdea("eat", 4);
	someAnimal->setIdea("sleep", 5);
	someAnimal->setIdea("meow", 6);
	someAnimal->printIdeas(4, 8);
	delete someAnimal;
	
	std::cout << "\nDog:\n";
	someAnimal = new Dog("Doggo");
	someAnimal->makeSound();
	someAnimal->setIdea("eat", 4);
	someAnimal->setIdea("sleep", 5);
	someAnimal->setIdea("bark", 6);
	someAnimal->printIdeas(4, 7);
	delete someAnimal;

	std::cout << "\nCheems dog:\n";
	Dog cheems;
	cheems.setIdea("eat", 1);
	cheems.setIdea("play", 2);
	cheems.setIdea("sleep", 3);
	{
		Dog doge = cheems;
		doge.setIdea("bark", 2);
	}
	cheems.printIdeas(1, 4);

	std::cout << "\nDogeCoin Ambassador\n";
	Dog *coolDog = new Dog("DogeCoin Ambassador");
	coolDog->setIdea("eat", 1);	
	coolDog->setIdea("bark", 2);	
	coolDog->setIdea("play", 3);	
	coolDog->setIdea("sleep", 4);	

	Animal *anotherDog = new Dog(*coolDog);
	anotherDog->makeSound();
	anotherDog->printIdeas(1, 5);
	delete coolDog;
	anotherDog->makeSound();
	anotherDog->printIdeas(1, 5);
}