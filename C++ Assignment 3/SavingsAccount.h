// COSC 2947
// Assignment 3
// Question 9.20 Savings Account 
// Amanda Bakalarczyk
// 2017-11-18

#pragma once
#ifndef SAVINGSACCOUNT_H
#define SAVINGSACCOUNT_H

class SavingsAccount {

public:
	SavingsAccount(double = 0);
	void calculateMonthlyInterest();
	static void modifyInterestRate(double);
	double getSavingsBalance() const;
	double getAnnualInterestRate() const;

private:
	double savingsBalance;
	static double annualInterestRate;
};
#endif

