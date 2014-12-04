#include "Account.h"
#include "Bank.h"
#include "Customer.h"
#include "Date.h"
#include "Transaction.h"
#include "Savings_Account.h"
#include "Checking_Account.h"
#include "CD_Account.h"

int main() {
	Bank bank = Bank();

	//Read text files
	bank.readCustomers();
	bank.readAccounts();
	bank.readTransactions();
	bank.readAssociation();
	Date date(11, 11, 11, '/' );
	Savings_Account sacc = Savings_Account(1, 100.00, date, 123.00);
	cout << "Customer Number: " << sacc.getNumber() << " Customer Balance: " << sacc.getBalance() << " Date: " << sacc.getDate() << " Interest Rate: " << sacc.getInterestRate() << endl;
	


	//Display main menu
	bank.main_menu();
	return 0;
}
