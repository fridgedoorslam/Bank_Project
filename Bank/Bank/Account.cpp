#include "Account.h"

//Default constructor

//Base Account Constructor
Account::Account(int number, double balance, Date date) {
	account_number = number;
	opening_balance = balance;
	opening_date = date;
}

/*
Savings_Account(int number, double balance, Date date) : Account(number, balance, date) {
	interest_rate = .05;
}
*/

//Getters
int Account::getNumber() const { return account_number; }

double Account::getBalance() { return opening_balance; }

vector<Customer*> Account::getOwners() { return pOwners; }

Date Account::getDate() const { return opening_date; }

vector<Transaction*>& Account::getTransactions() { return pTransactions; } //Changed to const for iter

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
	sort(pTransactions.begin(), pTransactions.end(), sort_transactions);
	for (transaction_iter = pTransactions.begin(); transaction_iter != pTransactions.end(); ++transaction_iter) {
		if ((*transaction_iter)->getType() == "d") {
			total += (*transaction_iter)->getAmount();
		}
		else {
			total -= (*transaction_iter)->getAmount();
		}
	}
	return total;
}

bool sort_transactions(Transaction* a, Transaction* b) {
	if (a->getDate() < b->getDate()) {
		return true;
	}
	return false;
}