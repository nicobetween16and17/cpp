#include "phonebook.hpp"
#include <iomanip>

void add(Phonebook *phonebook){
	std::string str;
	Contact c = Contact();
	std::cout << "Please give the following informations:";
	std::cout << "\nfirst name\n:";
	std::getline(std::cin, str);
	c.setfirst_name(str);
	std::cout << "\nlast name\n:";
	std::getline(std::cin, str);
	c.setlast_name(str);
	std::cout << "\nnickname\n:";
	std::getline(std::cin, str);
	c.setnickname(str);
	std::cout << "\nphone number\n:";
	std::getline(std::cin, str);
	c.setphone_number(str);
	std::cout << "\ndarkest secret\n:";
	std::getline(std::cin, str);
	c.setsecret(str);
	phonebook->setcontacts(c);
	std::cout << phonebook->get_index();
}

void search(Phonebook *phonebook){
	int n;
	int i;
	std::string cpy_name;
	std::string cpy_lastname;
	std::string cpy_nickname;
	i = -1;
	n = phonebook->get_index();
	if (phonebook->get_full())
		n = 7;
	if (!n) {
		std::cout << "no contacts in the phonebook\n";
		return;
	}

	do {
		while (++i < n) {
			cpy_name = phonebook->getcontact()[i].getfirst_name().substr(0, 9);
			cpy_lastname = phonebook->getcontact()[i].getlast_name().substr(0, 9);
			cpy_nickname = phonebook->getcontact()[i].getnickname().substr(0, 9);
			if (cpy_name.length() == 9)
				cpy_name.insert(cpy_name.end(), '.');
			if (cpy_lastname.length() == 9)
				cpy_lastname.insert(cpy_lastname.end(), '.');
			if (cpy_nickname.length() == 9)
				cpy_nickname.insert(cpy_nickname.end(), '.');
			std::cout << std::setw(10) << std::setfill(' ') << phonebook->getcontact()[i].getindex() << "|";
			std::cout << std::setw(10) << std::setfill(' ') << cpy_name << "|";
			std::cout << std::setw(10) << std::setfill(' ') << cpy_lastname << "|";
			std::cout << std::setw(10) << std::setfill(' ') << cpy_nickname << std::endl;
		}
		std::cout << "Type the index of the one you want to see\n:";
		std::string s;
		i = -1;
		std::getline(std::cin, s);
		for (unsigned long j = 0; j < s.length(); j++)
			if (isdigit(s[j]))
				i = stoi(s);
		if (i < 0 || (!phonebook->get_full() && phonebook->get_index() < i + 1) || (phonebook->get_full() && i > 7))
			std::cout << "wrong input\n";
		else {
			std::cout << std::endl<< std::setw(10) << std::setfill(' ') << "name: " << phonebook->getcontact()[i].getfirst_name() << std::endl
				 << std::setw(10) << std::setfill(' ') << "lastname: " << phonebook->getcontact()[i].getlast_name() << std::setw(10)<< std::endl
				 << std::setfill(' ') << "nickmame: " << phonebook->getcontact()[i].getnickname() << std::setw(10)<< std::endl
				 << std::setfill(' ') << "number: " << phonebook->getcontact()[i].getphone_number()<< std::endl
				 << std::setw(10) << std::setfill(' ') << "secret: " << phonebook->getcontact()[i].getsecret() << std::endl;
			break;
		}
	} while (1);
}

int main(void){
	Phonebook p = Phonebook();

	while (1) {
		std::string str;
		std::cout << "choose one:\n\tADD(1)\n\tSEARCH(2)\n\tEXIT(3)\n:";
		std::getline(std::cin, str);
		if (!str.compare("ADD") || !str.compare("1"))
			add(&p);
		else if (!str.compare("SEARCH") || !str.compare("2"))
			search(&p);
		else if (!str.compare("EXIT") || !str.compare("3"))
			exit(0);
		else
			std::cout << "\nwrong input";
		std::cout << std::endl;
	}
}