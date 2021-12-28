#include "Character.hpp"

Character::Character( const std::string& name ) : _name(name), _materiasCount(0)
{
    for (int i = 0; i < 4; i++)
        this->_inventory[i] = 0;
}

Character::Character( const Character& other )
{
    int i;

    this->_name = other._name;
    for (i = 0; other._inventory[i] && i < 4; i++)
        this->_inventory[i] = other._inventory[i]->clone();
    for (; i < 4; i++)
        this->_inventory[i] = 0;
}

Character& Character::operator= ( const Character& other )
{
    if (this != &other)
    {
        int i;
        this->_materiasCount = other._materiasCount;
        this->_name = other._name;
        for (i = 0; other._inventory[i] && i < 4; i++)
        {
            if (this->_inventory[i])
                delete this->_inventory[i];
            this->_inventory[i] = other._inventory[i]->clone();
        }
        for (; i < 4; i++)
        {
            if (this->_inventory[i])
                delete this->_inventory[i];
            this->_inventory[i] = 0;
        }
    }
    return (*this);
}

Character::~Character( )
{
    for (int i = 0; this->_inventory[i] && i < 4; i++)
        delete this->_inventory[i];
}

std::string const & Character::getName( void ) const
{
    return (this->_name);
}

void    Character::equip( AMateria *m )
{
    if (this->_materiasCount == 4 || !m)
        return ;
    else
    {
        this->_inventory[this->_materiasCount] = m;
        this->_materiasCount++;
    }
}

void    Character::unequip( int idx )
{
    for (int i = idx; i < this->_materiasCount - 1; i++)
        this->_inventory[i] = this->_inventory[i + 1];
    if (idx < this->_materiasCount)
    {
        this->_inventory[this->_materiasCount] = 0;
        this->_materiasCount--;
    }
}

void    Character::use (int idx, ICharacter& target )
{
    if (idx < this->_materiasCount)
        this->_inventory[idx]->use(target);
}

