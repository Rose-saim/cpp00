#ifndef CONTACT
#define CONTACT

# include <iostream>
# include <string>
# include <limits>

class Contacte
{
	private:
		std::string	num;
		std::string	f_name;
		std::string	l_name;
		std::string	nick_name;
		std::string	dark_secret;
	public:
		Contacte();
		~Contacte();
		std::string	GetNbr_Phone();
		std::string	GetFirst_Name();
		std::string	GetLast_Name();
		std::string	GetNick_Name();
		std::string	GetDark_Name();
		void	SetNbr_Phone(std::string nbr);
		void	SetFirst_Name(std::string name);
		void	SetLast_Name(std::string name);
		void	SetNick_Name(std::string name);
		void	SetDark_Name(std::string name);
		void	Nbr_Phone();
		void	First_Name();
		void	Last_Name();
		void	Nick_Name();
		void	Dark_Name();
};

#endif