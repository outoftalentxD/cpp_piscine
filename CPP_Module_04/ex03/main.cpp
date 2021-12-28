#include "Cure.hpp"
#include "Ice.hpp"
#include "MateriaSource.hpp"
#include "Character.hpp"

int main()
{
    IMateriaSource* src = new MateriaSource();
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());
	src->learnMateria(new Ice("PremiumIce"));
    ICharacter* me = new Character("me");
    AMateria* tmp;  
    tmp = src->createMateria("ice");
    me->equip(tmp);
    tmp = src->createMateria("cure");
    me->equip(tmp);
	tmp = src->createMateria("PremiumIce");
	me->equip(tmp);
	tmp = src->createMateria("Unknown");
	me->equip(tmp);
	if (!tmp)
		std::cout << "Cannot creaate such Materia\n";
    ICharacter* bob = new Character("bob");
    me->use(0, *bob); 
    me->use(1, *bob);
    me->use(2, *bob);
    me->use(3, *bob);

    delete bob;
    delete me;
    delete src;
    return 0;
}
