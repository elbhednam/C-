// COSC 2947
// Assignment 3
// Question 9.20 Savings Account 
// Amanda Bakalarczyk
// 2017-11-18

#include "stdafx.h"
#include "SavingsAccount.h"
#include <iostream>
using namespace std;

int main() {    

	// instantiate savings account objects
	SavingsAccount saver1{ 2000.00 };
	SavingsAccount saver2{ 3000.00 };

	// modify interest rate to 3%
	// calculate interest rate / new balance
	SavingsAccount::modifyInterestRate(3);
	saver1.calculateMonthlyInterest();
	saver2.calculateMonthlyInterest();

	// display new balances
	cout << "The new balance of saver1 is $" << saver1.getSavingsBalance() << endl;
	cout << "The new balance of saver2 is $" << saver2.getSavingsBalance() << endl;

	// modify interest rate to 4%
	// calculate interest rate / new balance
	SavingsAccount::modifyInterestRate(4);
	saver1.calculateMonthlyInterest();
	saver2.calculateMonthlyInterest();

	// display new balances
	cout << "The new balance of saver1 is $" << saver1.getSavingsBalance() << endl;
	cout << "The new balance of saver2 is $" << saver2.getSavingsBalance() << endl;
}

