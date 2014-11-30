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
	Account(int, double, Date);

	//Getters
	int getNumber() const;
	double getBalance();
	Date getDate() const;
	const std::vector<Transaction*>& getTransactions() const; //Changed to const for iter
	std::vector<Customer*> getOwners();

	//Setters
	void setNumber(int);
	void setBalance(double);
	void setOwner(Customer*);
	void setDate(Date);
	void setTransaction(Transaction*);

	//Operators
	friend std::istream& operator>>(std::istream&, std::vector<Account*>&);
	
	//Functions
	int calculate_total();

private:
	int account_number;
	double opening_balance;
	Date opening_date;
	std::vector<Transaction*> pTransactions;
	std::vector<Customer*> pOwners;
};

#endif