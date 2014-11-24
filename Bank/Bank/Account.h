#ifndef Account_h
#define Account_h

#include <vector>
#include "Transaction.h"
#include "Date.h"


class Customer;


class Account
{
public:
	//Constructor
	Account();

	//Getters
	int getNumber() const;
	double getBalance();
	Date getDate() const;
	std::vector<Transaction*> getTransactions();
	std::vector<Customer*> getOwners();

	//Setters
	void setNumber(int);
	void setBalance(double);
	void setOwner(Customer*);
	void setDate(Date);
	void setTransaction(Transaction*);

private:
	int account_number;
	double balance;
	Date date_opened;
	std::vector<Transaction*> pTransactions;
	std::vector<Customer*> pOwners;
};

#endif