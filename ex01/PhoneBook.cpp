#include "PhoneBook.hpp"

Repertoire::Repertoire()
{
	return;
}

Repertoire::~Repertoire()
{
	return;
}

void	Repertoire::SetContact(int i, Contacte contact)
{
	this->Contact[i] = contact;
	return ;
}

void	add_space_point(int size, std::string str)
{
	std::string space = " ";

	if (size > 10)
	{
		for (size_t i = 0; i < 9; i++)
		{
			std::cout << str[i];
		}
		std::cout << ".";
	}
	else
	{
		if (str[0] == '\0')
			size = 0;
		for (size_t j = size; j < 10; j++)
		{
			std::cout << space;	
		}
		if (str[0] != '\0')
			std::cout << str;	
	}
	std::cout << "|" ;
}

int	Repertoire::Contact_Index()
{
	int cmd;
	std::cout << "Enter index that you search please: ";

	while (42)
	{
		std::cin >> cmd;
		if (std::cin.eof())
		{
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			return (2);
		}
		else if (std::cin.fail())
		{
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			std::cout << "Please write number between 0 and 7";
		}
		else if (cmd < 0 || cmd > 7)
			std::cout << "Please write number between 0 and 7";
		else
			break ;
		
	}
	for (size_t i = 0; i < 9; i++)
	{
		std::cout << " ";
	}
	
	int	size;
	size = this->Contact[cmd].GetNbr_Phone().size();
	add_space_point(size, this->Contact[cmd].GetNbr_Phone());
	size = this->Contact[cmd].GetFirst_Name().size();
	add_space_point(size, this->Contact[cmd].GetFirst_Name());
	size = this->Contact[cmd].GetLast_Name().size();
	add_space_point(size, this->Contact[cmd].GetLast_Name());
	size = this->Contact[cmd].GetNick_Name().size();
	add_space_point(size, this->Contact[cmd].GetNick_Name());
	size = this->Contact[cmd].GetDark_Name().size();
	add_space_point(size, this->Contact[cmd].GetDark_Name());
	std::cout << std::endl;
	return (0);
}

int	Repertoire::SearchContact()
{
	int	size;
	std::cout << "Index     |";
	std::cout << "FirstName |";
	std::cout << "LastName  |";
	std::cout << "NickName  |" << std::endl;
	for (size_t i = 0; i < 8; i++)
	{
		for (size_t i = 0; i < 9; i++)
		{
			std::cout << " ";
		}
		std::cout << i;
		std::cout << "|";
		size = this->Contact[i].GetFirst_Name().size();
		add_space_point(size, this->Contact[i].GetFirst_Name());
		size = this->Contact[i].GetLast_Name().size();
		add_space_point(size, this->Contact[i].GetLast_Name());
		size = this->Contact[i].GetNick_Name().size();
		add_space_point(size, this->Contact[i].GetNick_Name());
		std::cout << std::endl;
	}
	return (Contact_Index());
}
