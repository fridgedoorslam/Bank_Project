#include "Customer.h"

//Default constructor

//Constructor
Customer::Customer(int ID, int SSN, string FIRST, string LAST, string ADDRESS) {
	customer_id = ID;
	social_security = SSN;
	first_name = FIRST;
	last_name = LAST;
	address = ADDRESS;
}

//Getters
int Customer::getId() const { return customer_id; }

int Customer::getSocial() const { return social_security; }

string Customer::getFirst() const { return first_name; }

string Customer::getLast() const { return last_name; }

string Customer::getAddress() const { return address; }

vector<Account*> Customer::getAccounts() { return pAccounts; }

//Setters
void Customer::setId(int ID) { customer_id = ID; }

void Customer::setSocial(int SSN) { social_security = SSN; }

void Customer::setFirst(string FIRST) { first_name = FIRST; }

void Customer::setLast(string LAST) { last_name = LAST; }

void Customer::setAddress(string ADDRESS) { address = ADDRESS; }

void Customer::setAccout(Account* ACCOUNT) { pAccounts.push_back(ACCOUNT); }

//Operators
istream& operator>>(istream& INPUT, Customer& CUSTOMER) {
	INPUT >> CUSTOMER.customer_id >> CUSTOMER.social_security >>
		CUSTOMER.first_name >> CUSTOMER.last_name;
	getline(INPUT, CUSTOMER.address);
	return INPUT;
}