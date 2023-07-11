#include <iostream>

class Contact{
	int index;
	std::string first_name;
	std::string last_name;
	std::string secret;
	std::string phone_number;
	std::string nickname;
public:
	void setindex(int index){
		this->index = index;
	}

	int getindex(){
		return (this->index);
	}

	void setfirst_name(std::string first_name){
		this->first_name = first_name;
	}

	std::string getfirst_name(){
		return (this->first_name);
	}

	void setlast_name(std::string last_name){
		this->last_name = last_name;
	}

	std::string getlast_name(){
		return (this->last_name);
	}

	void setsecret(std::string secret){
		this->secret = secret;
	}

	std::string getsecret(){
		return (this->secret);
	}

	void setphone_number(std::string phone_number){
		this->phone_number = phone_number;
	}

	std::string getphone_number(){
		return (this->phone_number);
	}

	void setnickname(std::string nickname){
		this->nickname = nickname;
	}

	std::string getnickname(){
		return (this->nickname);
	}

	Contact(){
	}

	Contact(int index, std::string first_name, std::string last_name, std::string secret, std::string phone_number, std::string nickname){
		this->index = index;
		this->first_name = first_name;
		this->last_name = last_name;
		this->secret = secret;
		this->phone_number = phone_number;
		this->nickname = nickname;
	}
};
