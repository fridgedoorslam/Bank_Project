#include <iostream>
#include "Checking_Account.h"
#include "Account.h"

using namespace std;

Checking_Account::Checking_Account(int number, double balance, Date& date, double monthlyFee, double overdraftFee) : Account(number, balance, date), monthly_fee(monthlyFee), overdraft_fee(overdraftFee)
{
	monthly_fee = monthlyFee;
	overdraft_fee = overdraftFee;
}

