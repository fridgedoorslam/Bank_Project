#include "Account.h"
#include "Bank.h"
#include "Customer.h"
#include "Date.h"
#include "Transaction.h"

int main() {
	//Fuck shit up, bitches
	Bank bank = Bank(); //killer line of code right there

	//Read in all the shit
	bank.readCustomers();
	bank.readAccounts();
	bank.readTransactions();
	//bank.main_menu();
	vector<Transaction*>::const_iterator iter;
	for (iter = bank.getTransactions().begin();
		iter != bank.getTransactions().end(); ++iter) {
		cout << (*iter)->getInfo() << endl;
	}

	//Call the main menu function
	//Main menu will give other menu options to print transactions,
	//add transactions, exit, do other cool shit...
	//Each option function that mainMenu() calls will
	//call mainMenu() after it finishes.
	//bank.mainMenu();
	system("pause");
	return 0;
}
