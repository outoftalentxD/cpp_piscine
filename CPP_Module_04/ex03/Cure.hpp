#ifndef CURE_HPP
# define CURE_HPP

#include "AMateria.hpp"

class Cure : public AMateria
{
    private:

    public:
        Cure( std::string const & type = "cure");

        Cure (const Cure& other );
        Cure& operator=( const Cure& other );

        virtual ~Cure( );
    
        AMateria* clone( void ) const;
        void use( ICharacter& target );
};

#endif