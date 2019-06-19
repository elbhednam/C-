#include "stdafx.h"
#include "CheckingAccount.h"

// Amanda Bakalarczyk
// COSC 2947
// Assignment 4
// Question 11.10 
// 2017-12-05
// CheckingAccount class inherits from Account
// Redefines member functions debit and credit

// Constructor receives initial balance and parameter indicating fee amount
// Uses base class constructor
CheckingAccount::CheckingAccount(double b, double f) : Account(b) {
	fee = f;
}

// Uses base class member function
// subtracts fee from balance
void CheckingAccount::credit(double a) {
	Account::credit(a);
	balance -= fee;
}

// Charges a fee if money is withdrawn
// based on boolean value returned by base class member function
void CheckingAccount::debit(double a) {
	if (Account::debit(a)) balance -= fee;
}

