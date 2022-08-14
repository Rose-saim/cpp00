#include "Contact.hpp"

Contacte::Contacte()
{
	return;
}

Contacte::~Contacte()
{
	return;
}

void	Contacte::Nbr_Phone()
{
	std::string cmd;
	int	opt = 1;

	while (opt)
	{
		std::cout << "Phone number:";
		std::cin >> cmd;
		this->SetNbr_Phone(cmd);
		for (size_t i = 0; cmd[i]; i++)
		{
			if (cmd[i] < '0' || cmd[i] > '9')
			{
				std::cout << "Nummber is nos good";
				std::cout << ", verif size and the first number" << std::endl;
				opt = 1;
				break ;
			}
			else
				opt = 0;
		}
	}
}


void	Contacte::Nick_Name()
{
	std::cout << "Enter your nick name:";
	std::string cmd;
	std::cin >> cmd;
	this->SetNick_Name(cmd);
}

void	Contacte::Last_Name()
{
	std::string cmd;
	int	opt = 1;
	
	while (opt)
	{
		std::cout << "Enter your last name:";
		std::cin >> cmd;
		this->SetLast_Name(cmd);
		for (size_t i = 0; cmd[i]; i++)
		{
			if (cmd[i] < 'A' || cmd[i] > 'Z')
			{
				std::cout << "Name is nos good";
				std::cout << ", verf your string is strong characters" << std::endl;
				opt = 1;
				break ;
			}
			else
				opt = 0;
		}
	}
}

void	Contacte::First_Name()
{
	std::string cmd;
	int	opt = 1;
	
	while (opt)
	{
		std::cout << "Enter Your first name:";
		std::cin >> cmd;
		this->SetFirst_Name(cmd);
		for (size_t i = 0; cmd[i]; i++)
		{
			if (cmd[i] < 'A' || cmd[i] > 'Z')
			{
				std::cout << "Name is nos good";
				std::cout << ", verf your string is strong characters" << std::endl;
				opt = 1;
				break ;
			}
			else
				opt = 0;
		}
	}
}

std::string	Contacte::GetNbr_Phone()
{
	return (this->num);
}
std::string	Contacte::GetNick_Name()
{
	return (this->nick_name);
}
std::string	Contacte::GetFirst_Name()
{
	return (this->f_name);
}
std::string	Contacte::GetLast_Name()
{
	return (this->l_name);
}
std::string	Contacte::GetDark_Name()
{
	return (this->dark_secret);
}


void	Contacte::SetNbr_Phone(std::string nbr)
{
	this->num = nbr;
}
void	Contacte::SetFirst_Name(std::string name)
{
	this->f_name = name;
}
void	Contacte::SetLast_Name(std::string name)
{
	this->l_name= name;
}
void	Contacte::SetNick_Name(std::string name)
{
	this->nick_name = name;
}
void	Contacte::SetDark_Name(std::string secret)
{
	this->dark_secret = secret;
}