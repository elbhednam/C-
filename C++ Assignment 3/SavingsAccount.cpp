// COSC 2947
// Assignment 3
// Question 9.20 Savings Account 
// Amanda Bakalarczyk
// 2017-11-18

#include "stdafx.h"
#include "SavingsAccount.h"

double SavingsAccount::annualInterestRate;

SavingsAccount::SavingsAccount(double b) {
	savingsBalance = b;
}

// Calculates the monthly interest by multiplying the savingsBalance by annualInterestRate
// divided by 12, added to savingsBalance
void SavingsAccount::calculateMonthlyInterest() {
	savingsBalance += savingsBalance * annualInterestRate / 12;
}

// Sets static annual interest rate to a new value, converts to percentage
void SavingsAccount::modifyInterestRate(double i) {
	annualInterestRate = i / 10;
}

// return account balance
double SavingsAccount::getSavingsBalance() const {
	return savingsBalance;
}

// return rate of interest
double SavingsAccount::getAnnualInterestRate() const {
	return annualInterestRate;
}


