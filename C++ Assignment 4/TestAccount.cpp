#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <string>
#include "Account.h"
#include "CheckingAccount.h"
#include "SavingsAccount.h"

// Amanda Bakalarczyk
// COSC 2947
// Assignment 4
// Question 11.10 
// 2017-12-05
// Test class for account inheritance hierarchy

using namespace std;

int main() {

	// Create different account objects
	Account a;
	CheckingAccount c; // default fee set to $1.75
	SavingsAccount s; // default interest rate at 2%

	// Simple account object credits and debits amounts with predictable outcome
	a.credit(400.00);
	a.debit(20.00);
	cout << "Account balance: " << a.getBalance() << endl;

	// fee applied to credit and debit transactions reflected in final balance
	c.credit(500.00);
	c.debit(75.00);
	cout << "Checking account balance: " << c.getBalance() << endl;

	s.credit(200.00); // Make a $20 deposit in the savings account
	double interest = s.calculateInterest(); // calculate interest
	s.credit(interest); // Add interst to account
	// Display balance
	cout << "Savings account balance: " << s.getBalance() << endl;

}