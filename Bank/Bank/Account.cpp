#include "Account.h"

//Default constructor

//Constructor

//Getters
int Account::getNumber() const { return account_number; }

double Account::getBalance() { return balance; }

Customer Account::getOwner() const { return owner; }

Date Account::getDate() const { return date_opened; }

vector<Transaction> Account::getTransactions() const { return transactions; }

//Setters
void Account::setNumber(int NUMBER) { account_number = NUMBER; }

void Account::setBalance(double BALANCE) { balance = BALANCE; }

void Account::setOwner(Customer OWNER) { owner = OWNER; }

void Account::setDate(Date DATE) { date_opened = DATE; }

void Account::setTransaction(Transaction TRANSACTION){ transactions.push_back(TRANSACTION); }

//Operators