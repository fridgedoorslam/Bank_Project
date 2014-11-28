#include "Bank.h"
#include <fstream>
#include <iostream>

//Getters
const vector<Customer*>& Bank::getCustomers() const { return pCustomers; } //Changed to const for iter

const vector<Account*>& Bank::getAccounts() const { return pAccounts; } //Changed to const for iter

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


void Bank::readAccounts() {
	ifstream account_file("accounts_input.txt");
	if (!account_file) {
		cout << "accounts_input.txt not found." << endl;
	}
	while (!account_file.eof()) {
		account_file >> pAccounts;
	}
}
/*
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
	cout << "--Main Menu--" << endl;
	cout << "Enter 1 to add a new customer." << endl;
	cout << "Enter 2 to add a new account." << endl;
	cout << "Enter 3 to add a transaction to an existing account." << endl;
	cout << "Enter 0 to exit application." << endl;
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
	cin >> option;
	return option;
}

//Customer Input
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
	cout << "Successfully added customer." << endl;
	cout << "Enter 1 to add another customer." << endl;
	cout << "Enter 0 to return to the main menu." << endl;

	int option = get_input();
	switch (option) {
	case 0:
		main_menu();
	case 1:
		customer_input_menu();
	}
}

//Transaction Input
void Bank::transaction_input_menu() {
	cout << "Here you can input a transaction to an account." << endl;
	system("pause");
	cout << endl << endl << endl;
	main_menu();
}

//Account Input
void Bank::account_input_menu() {
	cout << "--Account Input Menu--" << endl;
	int number;
	double balance;
	Date date;
	cout << "Account Number: "; cin >> number;
	cout << "Opening Balance: "; cin >> balance;
	cout << "Date: "; cin >> date;
	Account* new_account = new Account(number, balance, date);
	pAccounts.push_back(new_account);
	cout << "Successfully added account." << endl;
	cout << "Enter 1 to add another account." << endl;
	cout << "Enter 0 to return to the main menu." << endl;
	int option = get_input();
	switch (option) {
	case 0:
		main_menu();
	case 1:
		account_input_menu();
	}
}