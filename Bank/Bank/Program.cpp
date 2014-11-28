#include "Account.h"
#include "Bank.h"
#include "Customer.h"
#include "Date.h"
#include "Transaction.h"

int main() {
	Bank bank = Bank();

	//Read text files
	bank.readCustomers();
	bank.readAccounts();
	bank.readTransactions();
	bank.main_menu();
	vector<Transaction*>::const_iterator iter;
	for (iter = bank.getTransactions().begin();
		iter != bank.getTransactions().end(); ++iter) {
		cout << (*iter)->getInfo() << endl;
	}
	system("pause");
	return 0;
}
