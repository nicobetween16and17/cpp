#include "Harl.hpp"

void	Harl::debug(void)
{
	std::cout << "[DEBUG]\n";
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!\n";
}
void	Harl::info(void)
{
	Harl::debug();
	std::cout << "[INFO]\n";
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!\n";
}
void	Harl::warning(void)
{
	Harl::info();
	std::cout << "[WARNING]\n";
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming foryears whereas you started working here since last month.\n";
}
void	Harl::error(void)
{
	Harl::warning();
	std::cout << "[ERROR]\n";
	std::cout << "This is unacceptable! I want to speak to the manager now.\n";
}
Harl::Harl()
{
}

Harl::~Harl()
{
}
int str2int(std::string str, int h)
{
	int res = 0;
	while (++h < (int)str.length() - 1)
		res += str.at(h) * (h + 1);
	return res;
}

void	Harl::complain(std::string level)
{
	switch (str2int(level, -1)) {
		case 744:{Harl::debug();break;}
		case 439:{Harl::info();break;}
		case 1608:{Harl::warning();break;}
		case 795:{Harl::error();break;}
		default: ;
	}
}