#include <iostream>

int main(void)
{
	std::string str;
	str = "HI THIS IS BRAIN";
	std::string *stringPTR;
	stringPTR = &str;
	std::string	&stringREF = str;
	std::cout << "str address: " << &str << std::endl;
	std::cout << "PTR address: " << stringPTR << std::endl;
	std::cout << "REF address: " << &stringREF << std::endl;
	std::cout << "PTR string: " << *stringPTR << std::endl;
	std::cout << "REF string: " << stringREF << std::endl;
}