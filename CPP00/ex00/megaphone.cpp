#include <iostream>
#include <algorithm>

int main(int ac, char **av)
{
	int i = 0;
	if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	while (++i < ac){
		std::string s = av[i];
		transform(s.begin(), s.end(), s.begin(), ::toupper);
		std::cout << s;

	}
	std::cout << "\n";
	return (0);
}