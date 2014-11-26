#include "Bank.h"
#include <fstream>
#include <iostream>

//Getters
const vector<Customer*>& Bank::getCustomers() const { return pCustomers; } //Changed to const for iter

vector<Account*> Bank::getAccounts() { return pAccounts; }

//Setters
void Bank::setCustomer(Customer* CUSTOMER) { pCustomers.push_back(CUSTOMER); }

void Bank::setAccount(Account* ACCOUNT) { pAccounts.push_back(ACCOUNT); }


//Functions

//Function to read customers file and store 
//information into customers vector
void Bank::readCustomers() {
	ifstream customer_file("customer_input.txt");
	if (!customer_file) {
		cout << "customer_input.txt not found." << endl;
	}
	while (!customer_file.eof()) {
		customer_file >> pCustomers;
	}
}

/*
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
*/

void Bank::new_customer_menu() {
	cout << "Here you can create a new customer." << endl << endl;
	int new_id, new_ssn;
	string new_first, new_last, new_address;
	cout << "First Name: "; cin >> new_first;
	cout << "Last Name: "; cin >> new_last;
	cout << "Social Security Number: "; cin >> new_ssn;
	cout << "Address: "; getline(cin, new_address); getline(cin, new_address);
	//We should check if ID is valid and unused
	cout << "Customer ID Number: "; cin >> new_id;
	Customer* new_customer = new Customer(new_id, new_ssn, new_first, new_last, new_address);
	pCustomers.push_back(new_customer);
}