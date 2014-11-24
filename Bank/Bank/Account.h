#ifndef Account_h
#define Account_h

#include <vector>
#include "Transaction.h"
#include "Customer.h"
#include "Date.h"

using namespace std;



// hi
class Account
{
public:
	//Constructor
	Account();

	//Getters
	int getNumber() const;
	double getBalance();
	Customer getOwner() const;
	Date getDate() const;
	vector<Transaction> getTransactions() const;

	//Setters
	void setNumber(int);
	void setBalance(double);
	void setOwner(Customer);
	void setDate(Date);
	void setTransaction(Transaction);

private:
	int account_number;
	double balance;
	Customer owner;
	Date date_opened;
	vector<Transaction> transactions;
};

#endif