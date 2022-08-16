#ifndef PHONEBOOK
#define PHONEBOOK

#include "Contact.hpp"
#include <iostream>
# include <string>
# include <limits>

class Repertoire
{
	private:
		Contacte Contact[8];
	public:
		Repertoire();
		~Repertoire();
		int		Contact_Index();
		int		SearchContact();
		void	SetContact(int i, Contacte contact);
};

#endif