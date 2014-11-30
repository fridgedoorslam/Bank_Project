#include "Account.h"

//Default constructor

//Constructor
Account::Account(int number, double balance, Date date) {
	account_number = number;
	opening_balance = balance;
	opening_date = date;
}

//Getters
int Account::getNumber() const { return account_number; }

double Account::getBalance() { return opening_balance; }

vector<Customer*> Account::getOwners() { return pOwners; }

Date Account::getDate() const { return opening_date; }

const vector<Transaction*>& Account::getTransactions() const { return pTransactions; } //Changed to const for iter

//Setters
void Account::setNumber(int NUMBER) { account_number = NUMBER; }

void Account::setBalance(double BALANCE) { opening_balance = BALANCE; }

void Account::setOwner(Customer* OWNER) { pOwners.push_back(OWNER); }

void Account::setDate(Date DATE) { opening_date = DATE; }

void Account::setTransaction(Transaction* TRANSACTION){ pTransactions.push_back(TRANSACTION); }

//Operators
istream& operator>>(istream& INPUT, vector<Account*>& vector) {
	int number;
	double balance;
	Date date;
	INPUT >> number >> balance >> date;
	Account* new_account = new Account(number, balance, date);
	vector.push_back(new_account);
	return INPUT;
}

//Functions
double Account::calculate_total() {
	double total = opening_balance;
	vector<Transaction*>::const_iterator transaction_iter;
	//Sort the fuckers
	for (transaction_iter = pTransactions.begin(); transaction_iter != pTransactions.end(); ++transaction_iter) {

	}
	return total;
}

bool Account::sort_transactions(Transaction* a, Transaction* b) {
	return true;
}