#include <iostream>
#include "CD_Account.h"
#include "Account.h"

using namespace std;

CD_Account::CD_Account(int number, double balance, Date& date, double interestRate, Date& maturityDate) : Account(number, balance, date), interest_rate(interestRate), maturity_date(maturityDate)
{
	interest_rate = interestRate;
	maturity_date = maturityDate;
}

