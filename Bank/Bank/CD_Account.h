#ifndef CD_Account_h_
#define CD_Account_h_
#include "Account.h"


class CD_Account : public Account {
public:
	CD_Account(int, double, Date&, double, Date&);
private:
	double interest_rate;
	Date maturity_date;
};

#endif
