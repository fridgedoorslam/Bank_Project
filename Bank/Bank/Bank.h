#ifndef Bank_h
#define Bank_h

#include "Account.h"
#include "Customer.h"
#include <vector>
#include <iostream>

using namespace std;

class Bank
{
public:
	//Getters
	vector<Customer> getCustomers();
	vector<Account> getAccounts();

	//Setters
	void setCustomer(Customer);
	void setAccount(Account);

	//Functions
	void readCustomers();
	void readAccounts();
	void readTransactions();

private:
	vector<Customer> customers;
	vector<Account> accounts;
};

#endif