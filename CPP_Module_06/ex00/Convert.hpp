#ifndef CONVERT_HPP
# define CONVERT_HPP

# include <iostream>
# include <string>
# include <cstdlib>
# include <cstring>
# include <iomanip>
# include <climits>


class Convert
{
	private:
		std::string	_type;
		double		_content;
		int			_precision;
		int			_notDefaultType;

		void setType( char * input );

	public:
		Convert ( char * input );
		
		Convert( const Convert& other );
		Convert& operator=( const Convert& other );
		
		virtual ~Convert ();
		void	displayChar( void ) const;
		void	displayInt( void ) const;
		void	displayFloat( void ) const;
		void	displayDouble( void ) const;
		void	displayTypes( void ) const;

};

#endif