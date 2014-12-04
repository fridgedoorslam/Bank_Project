#ifndef Account_h
#define Account_h

#include <vector>
#include <algorithm>
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
	std::vector<Transaction*>& getTransactions(); //Changed to const for iter
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
	double calculate_total();

protected:
	int account_number;
	double opening_balance;
	Date opening_date;
	std::vector<Transaction*> pTransactions;
	std::vector<Customer*> pOwners;
};

class Savings_Account : public Account {
public:
	//Constructor
	//Savings_Account() : Account();

private:
	double interest_rate;
};

class Checking_Account : public Account {

private:
	double monthly_fee;
	double overdraft_fee;
};

class CD_Account : public Account {

private:
	double interest_rate;
	Date maturity_date;
};

//Sorting function to sort vector of transaction pointers
bool sort_transactions(Transaction*, Transaction*);

#endif