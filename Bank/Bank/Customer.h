#ifndef Customer_h
#define Customer_h

#include <string>
#include <vector>
#include "Account.h"

using namespace std;

class Customer
{
public:
	//Constructors
	Customer();
	Customer(int, int, string, string, string);

	//Getters
	int getId() const;
	int getSocial() const;
	string getFirst() const;
	string getLast() const;
	string getAddress() const;
	vector<Account> getAccounts() const;

	//Setters
	void setId(int);
	void setSocial(int);
	void setFirst(string);
	void setLast(string);
	void setAddress(string);
	void setAccout(Account);

	//Operators
	friend istream& operator>>(istream&, Customer&);

private:
	int customer_id, social_security;
	string first_name, last_name, address;
	vector<Account> accounts;
};

#endif