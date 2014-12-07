#ifndef Loan_h_
#define Loan_h_
#include "Account.h"


class Loan : public Account {
public:
	//Constructor
	Loan(int, double, Date&, double);

	//Getters
	double getInterest() const;

	//Setters
	void setInterest(double);

private:
	double interest_rate;

};

#endif