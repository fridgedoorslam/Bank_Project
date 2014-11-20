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
	customer_file.open("Customers.input");
	Customer buffer;
	while (customer_file >> buffer) {
		customers.push_back(buffer);
	}
}