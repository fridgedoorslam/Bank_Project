#include <iostream>
#include "Savings_Account.h"
#include "Account.h"

using namespace std;

Savings_Account::Savings_Account(){};

Savings_Account::Savings_Account(int number, double balance, Date& date, double interestRate) : Account(number, balance, date), interest_rate(interestRate)
{
	interest_rate = interestRate;
}

double Savings_Account::getInterestRate() {return interest_rate;}



