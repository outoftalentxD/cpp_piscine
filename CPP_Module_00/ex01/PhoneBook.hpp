#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <iostream>
#include <iomanip>
#include "Contact.hpp"

class PhoneBook
{
	private:
		int			_contactsCount;
		Contact		_contacts[8];
	public:
		void	printContacts(void) const;
		void	printContact(Contact contact) const;
		void	addNewContact(Contact contact);
		void	getNewContact(void);
		void	setContactsCount(int count);
		int		getContactsCount(void) const;

		PhoneBook();
		~PhoneBook();
};

#endif