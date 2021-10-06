#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include "ICharacter.hpp"

class Character : public ICharacter
{
    private:
        std::string _name;
        AMateria*   _inventory[4];
        int         _materiasCount;
    public:
        Character( const std::string& name );
        
        Character( const Character& other );
        Character& operator= ( const Character& other );

        virtual ~Character() ;
        
        std::string const & getName( void ) const;
        void equip( AMateria* m );
        void unequip( int idx );
        void use( int idx, ICharacter& target );
};

#endif