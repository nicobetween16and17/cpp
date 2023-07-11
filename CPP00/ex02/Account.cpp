#include "Account.hpp"
#include "iostream"

int Account::_nbAccounts = 0;
int Account::_totalAmount= 0;
int Account::_totalNbDeposits= 0;
int Account::_totalNbWithdrawals = 0;

int Account::getNbAccounts(void){
	return (_nbAccounts);
}

int Account::getTotalAmount(void){
	return (_totalAmount);
}

int Account::getNbDeposits(void){
	return (_totalNbDeposits);
}

int Account::getNbWithdrawals(void){
	return (_totalNbWithdrawals);
}

void Account::_displayTimestamp(void){
	time_t t = time(0);
	tm* now = localtime(&t);
	std::cout << "["<<
		 now->tm_year + 1900<<
		 now->tm_mon + 1<<
		 now->tm_mday<<
		 "_"<<
		 now->tm_hour<<
		 now->tm_min<<
		 now->tm_sec<<"] ";
}
void Account::makeDeposit(int deposit){
	this->_amount += deposit;
	this->_nbDeposits++;
	this->_totalAmount += deposit;
}

bool Account::makeWithdrawal(int withdrawal){
	if (withdrawal <= this->_amount) {
		this->_amount -= withdrawal;
        this->_totalAmount -= withdrawal;
		this->_nbWithdrawals++;
		return (true);
	}
	_displayTimestamp();
	std::cout <<"index:"<<this->_accountIndex<<";p_amount"<<withdrawal<<";refused\n";
	return (false);
}

int Account::checkAmount(void) const{
	return (this->_amount);
}

void Account::displayStatus(void) const{
	_displayTimestamp();
	std::cout <<"index:"<< this->_accountIndex << ";"
			<<"amount:"<< this->_amount << ";"
			<<"deposits:"<< this->_nbDeposits << ";"
			<<"withdrawals:"<< this->_nbWithdrawals << ";\n";
}

Account::Account(int initial_deposit){
	this->_amount = initial_deposit;
	this->_accountIndex = _nbAccounts++;
	_totalAmount = initial_deposit;
	_displayTimestamp();
	std::cout << "index:"<<this->_accountIndex<<";"<<
			"amount:"<< this->_amount<<";created\n";
}

void Account::displayAccountsInfos(void) {
	static int once;
	if (!once++)
		_displayTimestamp();
	std::cout <<"accounts:"<<getNbAccounts()<<";total:"<<getTotalAmount()<<";deposits:"<< getNbDeposits() << ";withdrawals:"<<getNbWithdrawals()<<std::endl;
	once = 0;
}
Account::~Account(){
	_displayTimestamp();
	_nbAccounts--;
	std::cout << "index:"<<this->_accountIndex<<";"<<
		 "amount:"<< this->_amount<<";closed\n";
}
