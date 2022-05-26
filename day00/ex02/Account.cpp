#include "Account.hpp"
#include <iostream>
#include <iomanip>

// Static variables

int		Account::_nbAccounts = 0;
int		Account::_totalAmount = 0;
int		Account::_totalNbDeposits = 0;
int		Account::_totalNbWithdrawals = 0;

// Static methods

int	Account::getNbAccounts( void ){
	return _nbAccounts;
}

int	Account::getTotalAmount( void ){
	return _totalAmount;
}

int	Account::getNbDeposits( void ){
	return _totalNbDeposits;
}

int	Account::getNbWithdrawals( void ){
	return _totalNbWithdrawals;
}

void	Account::displayAccountsInfos(){
	_displayTimestamp();
	std::cout << "accounts:" << _nbAccounts << ';';
	std::cout << "total:" << _totalAmount << ';';
	std::cout << "deposits:" << _totalNbDeposits << ';';
	std::cout << "withdrawals:" << _totalNbWithdrawals;
	std::cout << '\n';
};

void	Account::_displayTimestamp(){
	std::time_t now = std::time(nullptr);
	std::tm *utc_tm = localtime(&now);
	std::cout << std::setfill('0') << '[' << (utc_tm->tm_year + 1900)
				<< std::setw(2) << utc_tm->tm_mon
				<< std::setw(2) << utc_tm->tm_mday << '_'
				<< std::setw(2) << utc_tm->tm_hour
				<< std::setw(2) << utc_tm->tm_min
				<< std::setw(2) << utc_tm->tm_sec << "] ";
}

// Constructors/Destructor

Account::Account(int a) {
	_amount = a;
	_totalAmount += a;
	_accountIndex = _nbAccounts++;
	_nbDeposits = _nbWithdrawals = 0;
	Account::_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << _amount <<";created\n";
}

Account::~Account(){
	Account::_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << _amount <<";closed\n";
}

// Methods

void	Account::displayStatus() const {
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ';';
	std::cout << "amount:" << _amount << ';';
	std::cout << "deposits:" << _nbDeposits << ';';
	std::cout << "withdrawals:" << _nbWithdrawals;
	std::cout << '\n';
}

void	Account::makeDeposit(int deposit){
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ';';
	std::cout << "p_amount:" << _amount << ';';
	std::cout << "deposit:" << deposit << ';';
	std::cout << "amount:" << (_amount += deposit) << ';';
	std::cout << "nb_deposits:" << ++_nbDeposits;
	std::cout << '\n';
	_totalAmount += deposit;
	++_totalNbDeposits;
}

int		Account::checkAmount() const {
	return this->_amount;
}

bool	Account::makeWithdrawal(int withdrawal) {
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ';';
	std::cout << "p_amount:" << _amount << ';';
	std::cout << "withdrawal:";
	if (_amount < withdrawal) {
		std::cout << "refused\n";
		return false;
	}
	std::cout << withdrawal << ';';
	std::cout << "amount:" << (_amount -= withdrawal) << ';';
	std::cout << "nb_withdrawals:" << ++_nbWithdrawals;
	std::cout << '\n';
	_totalAmount -= withdrawal;
	++_totalNbWithdrawals;
	return true;
}