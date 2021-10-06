#ifndef ICE_HPP
# define ICE_HPP

#include "AMateria.hpp"

class Ice : public AMateria
{
    private:

    public:
        Ice( std::string const & type = "ice");

        Ice (const Ice& other );
        Ice& operator=( const Ice& other );

        virtual ~Ice( );
        
        AMateria* clone( void ) const;
        void use( ICharacter& target );
};

#endif