#include <string>
#include "Transaction.h"

//Default Constructor
Transaction::Transaction(){
	amount = 0.0;
}

//Constructor
Transaction::Transaction(int number, const string Type, double Amount, const Date& TransDate, string Info) {
	account_number = number;
	type = Type;
	amount = Amount;
	transDate = TransDate;
	info = Info;
}

//Getters
string Transaction::getType() const { return type; }

double Transaction::getAmount() const { return amount; }

const Date& Transaction::getDate() const { return transDate; }

string Transaction::getInfo() const { return info; }

//Setters
void Transaction::setType(const string Type) { type = Type; }

void Transaction::setAmount(double Amount) { amount = Amount; }

void Transaction::setDate(const Date& TransDate) { transDate = TransDate; }

void Transaction::setInfo(string Info) { info = Info; }


//Operators
istream& operator>>(istream& input, vector<Transaction*>& vector) {
	int account;
	string type, info;
	double amount;
	Date date;
	input >> account >> type >> amount >> date;
	getline(input, info);
	Transaction* new_transaction = new Transaction(account, type, amount, date, info);
	vector.push_back(new_transaction);
	return input;
}

ostream& operator<<(ostream& output, const Transaction& transaction) {
	output << transaction.getDate();
	if (transaction.getType() == "d") {
		cout << " Deposit, $" << transaction.amount << " from" << transaction.info << ".";
	}
	else {
		cout << " Withdrawal, $" << transaction.amount << " to" << transaction.info << ".";
	}
	return output;
}

bool Transaction::operator<(const Transaction& transaction) const {
	if (getDate() < transaction.getDate()) { return true; }
	else if (getDate() == transaction.getDate() && getType() == "d") { return true; }
	else { return false; }
}