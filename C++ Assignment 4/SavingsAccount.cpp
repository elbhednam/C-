#include "stdafx.h"
#include "SavingsAccount.h"

// Amanda Bakalarczyk
// COSC 2947
// Assignment 4
// Question 11.10 
// 2017-12-05
// SavingsAccount class inherits from Account

// Constructor recieves initial balance and initial value for interest rate (percentage represented in decimal form)
// Uses base class constructor
SavingsAccount::SavingsAccount(double b, double i) : Account(b) {
	interestRate = i;
}

// Returns double representing annual interest
// I = Prt
double SavingsAccount::calculateInterest() {
	return balance * interestRate;
}
