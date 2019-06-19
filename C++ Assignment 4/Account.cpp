
#include "stdafx.h"
#include <stdexcept>
#include "Account.h"

// Amanda Bakalarczyk
// COSC 2947
// Assignment 4
// Question 11.10 
// 2017-12-05
// Base class Account

using namespace std;

// Constructor receives initial balance, validates balance to ensure it iss >= 0.0
// Throws invalid argument exception otherwise
Account::Account( double b) {

	if (b >= 0.0) balance = b;

	else {
		balance = 0.0;
		throw invalid_argument("Initial balance was invalid");
	}
}

// Adds an amount to the current balance
void Account::credit(double a) {
	balance += a;
}

// Subtracts an amount from the current balance, representing a withdrawal
// Validates whether or not amount given can be removed from the current balance
// Returns boolean value to indicate whether withdrawal was successful
bool Account::debit(double a) {
	if (a > balance) {
		throw invalid_argument("Debit amount exceeded account balance");
		return false;
	}

	else {
		balance -= a;
		return true;
	}
}

// Returns current account balance
double Account::getBalance() const {
	return balance;
}
