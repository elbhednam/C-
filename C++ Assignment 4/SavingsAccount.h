#pragma once
#ifndef SAVINGSACCOUNT_H
#define SAVINGSACCOUNT_H
#include "Account.h"

// Amanda Bakalarczyk
// COSC 2947
// Assignment 4
// Question 11.10 
// 2017-12-05
// SavingsAccount class inherits from Account

class SavingsAccount : public Account {

public:
	SavingsAccount(double = 0.0, double = 0.02);
	double calculateInterest();

private:
	double interestRate;

}; 
#endif