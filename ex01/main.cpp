#include "PhoneBook.hpp"

int	main()
{
	Repertoire first_one;
	std::string command;
	int	i = 0;

	while (1)
	{
		std::cout << "Enter command: ";
		std::cin >>command;
		if (command == "EXIT")
			break ;
		else if (command == "ADD")
		{
				Contacte	contact;
				if (i >= 8)
					i = 0;
				contact.Nbr_Phone();
				contact.First_Name();
				contact.Last_Name();
				contact.Nick_Name();
				first_one.SetContact(i, contact);
				++i;
		}
		else if (command == "SEARCH")
		{
			if (first_one.SearchContact() == 2)
				return 2;
		}
		else
		{
			std::cout << "Command is wrong please";
			std::cout << " type ADD, EXIT, or SEARCH" << std::endl;
		}
	}
	return 0;
}