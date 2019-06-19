#pragma once
#ifndef CHECKINGACCOUNT_H
#define CHECKINGACCOUNT_H
#include "Account.h"

// Amanda Bakalarczyk
// COSC 2947
// Assignment 4
// Question 11.10 
// 2017-12-05
// CheckingAccount class inherits from Account
// Redefines member functions debit and credit

class CheckingAccount : public Account {

public:

	CheckingAccount(double = 0.0, double = 1.75); 
	void credit(double);
	void debit(double);

private:
	double fee;

};
#endif