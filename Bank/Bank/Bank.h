#ifndef Bank_h
#define Bank_h

#include "Account.h"
#include "Customer.h"
#include <vector>


class Bank
{
public:
	//Getters
	const std::vector<Customer*>& getCustomers() const; //Changed to const for iter
	const std::vector<Account*>& getAccounts() const; //Changed to const for iter
	const std::vector<Transaction*>& getTransactions() const; //Changed to const for iter

	//Setters
	void setCustomer(Customer*);
	void setAccount(Account*);
	void setTransaction(Transaction*);

	//Read Functions
	void readCustomers();
	void readAccounts();
	void readTransactions();
	void readAssociation();

	//Creation Functions
	void main_menu();
	int get_input();
	void customer_input_menu();
	void account_input_menu();
	void transaction_input_menu();
	void customer_info_menu();
	void print_customer_statements();
	void print_total();
	void account_association_menu();
	void customer_summary_menu();

private:
	std::vector<Customer*> pCustomers;
	std::vector<Account*> pAccounts;
	std::vector<Transaction*> pTransactions;
};

#endif