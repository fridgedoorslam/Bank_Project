#include "Bank.h"
#include <fstream>

//Getters
vector<Customer> Bank::getCustomers() { return customers; }

vector<Account> Bank::getAccounts() { return accounts; }

//Setters
void Bank::setCustomer(Customer CUSTOMER) { customers.push_back(CUSTOMER); }

void Bank::setAccount(Account ACCOUNT) { accounts.push_back(ACCOUNT); }

//Functions

//Function to read customers file and store 
//information into customers vector
void Bank::readCustomers() {
	ifstream customer_file;
	customer_file.open("customers_input.txt");
	Customer buffer;
	while (customer_file >> buffer) {
		//Do some shit here
		customers.push_back(buffer);
	}
}

void Bank::readAccounts() {
	ifstream account_file;
	account_file.open("accounts_input.txt");
	Account buffer;
	while (account_file >> buffer) {
		//Do some shit here
		accounts.push_back(buffer);
	}
}

void Bank::readTransactions() {
	ifstream transaction_file;
	transaction_file.open("transactions_input.txt");
	Transaction buffer;
	while (transaction_file >> buffer) {
		//Do some shit here
	}
}