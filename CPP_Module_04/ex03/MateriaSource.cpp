#include "MateriaSource.hpp"

MateriaSource::MateriaSource( )
{
    for (int i = 0; i < 4; i++)
        this->_materials[i] = nullptr; 
}

MateriaSource::MateriaSource( const MateriaSource& other )
{
    int i;
    for (i = 0; other._materials[i] && i < 4; i++)
    {
        if (this->_materials[i])
            delete this->_materials[i];
        this->_materials[i] = other._materials[i]->clone(); 
    }
    for (; i < 4; i++)
    {
        if (this->_materials[i])
            delete this->_materials[i];
        this->_materials[i] = nullptr;
    }
}

MateriaSource&  MateriaSource::operator=( const MateriaSource& other )
{
    if (this != &other)
    {
         int i;
        for (i = 0; other._materials[i] && i < 4; i++)
        {
            if (this->_materials[i])
                delete this->_materials[i];
            this->_materials[i] = other._materials[i]->clone(); 
        }
        for (; i < 4; i++)
        {
            if (this->_materials[i])
                delete this->_materials[i];
            this->_materials[i] = nullptr;
        }
    }
    return (*this);
}

MateriaSource::~MateriaSource( )
{
    for (int i = 0; i < 4 && this->_materials[i]; i++)
        delete this->_materials[i];
}

void MateriaSource::learnMateria( AMateria *m )
{
    int i;
    for (i = 0; this->_materials[i] && i < 4; i++)
    {
        if (this->_materials[i]->getType() == m->getType())
            return ;
    }
    if (i < 4)
        this->_materials[i] = m->clone();
}

AMateria*   MateriaSource::createMateria( std::string const & type )
{  
    int i;
    for (i = 0; this->_materials[i] && i < 4; i++)
    {
        if (this->_materials[i]->getType() == type)
            return (this->_materials[i]->clone()); 
    }
    return (nullptr);
}