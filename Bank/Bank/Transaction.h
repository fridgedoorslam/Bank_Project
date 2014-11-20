#ifndef Transaction_h
#define Transaction_h

#include "Date.h"
#include <iostream>
#include <string>

using namespace std;

class Transaction {
public:
	//Constructors
	Transaction();
	Transaction(const string, double, const Date&, string);

	//Getters
	string getType() const;
	double getAmount() const;
	const Date& getDate() const;
	string getInfo() const;

	//Setters
	void setType(const string);
	void setAmount(double);
	void setDate(const Date&);
	void setInfo(string);

	//Operators
	friend istream& operator>>(istream&, Transaction&);
	friend ostream& operator<<(ostream&, const Transaction&);
	bool operator<(const Transaction&) const;

private:
	string type, info;
	double amount;
	Date transDate;
};

#endif