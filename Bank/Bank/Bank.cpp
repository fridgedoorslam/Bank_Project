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


//Menu Functions
void Bank::main_menu() {
	int option = get_input();
	switch (option) {
	case 0:
		exit(0);
	case 1:
		customer_input_menu();
	case 2:
		account_input_menu();
	case 3:
		transaction_input_menu();
	}
}

//Get Input
int Bank::get_input() {
	int option;
	cout << "--Main Menu--" << endl;
	cout << "Enter 1 to add a new customer." << endl;
	cout << "Enter 2 to add a new account." << endl;
	cout << "Enter 3 to add a transaction to an existing account." << endl;
	cout << "Enter 0 to exit application." << endl;
	cin >> option;
	return option;
}

void Bank::customer_input_menu() {
	cout << "--Customer Input Menu--" << endl << endl;
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

void Bank::transaction_input_menu() {
	cout << "Here you can input a transaction to an account." << endl;
	system("pause");
	cout << endl << endl << endl;
	main_menu();
}

void Bank::account_input_menu() {
	cout << "Here you can add and account." << endl;
	system("pause");
	cout << endl << endl << endl;
	main_menu();
}