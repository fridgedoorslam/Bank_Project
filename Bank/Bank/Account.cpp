#include "Account.h"

//Default constructor

//Constructor

//Getters
int Account::getNumber() const { return account_number; }

double Account::getBalance() { return balance; }

vector<Customer*> Account::getOwners() { return pOwners; }

Date Account::getDate() const { return date_opened; }

vector<Transaction*> Account::getTransactions() { return pTransactions; }

//Setters
void Account::setNumber(int NUMBER) { account_number = NUMBER; }

void Account::setBalance(double BALANCE) { balance = BALANCE; }

void Account::setOwner(Customer* OWNER) { pOwners.push_back(OWNER); }

void Account::setDate(Date DATE) { date_opened = DATE; }

void Account::setTransaction(Transaction* TRANSACTION){ pTransactions.push_back(TRANSACTION); }

//Operators