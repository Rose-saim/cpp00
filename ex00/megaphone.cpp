#include <iostream>

int main(int ac, char **av)
{
	if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	for(int i = 1; av[i]; ++i)
	{
		for(int j = 0; av[i][j]; ++j)
		{
			char	c = toupper(av[i][j]);
			std::cout << c;
		}
	}
	std::cout << std::endl;
    return 0;
}
