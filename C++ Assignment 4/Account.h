#pragma once
#ifndef ACCOUNT_H
#define ACCOUNT_H

// COSC 2947
// Assignment 4
// Question 11.10 
// 2017-12-05
// Base class Account

class Account {

public:

	Account(double = 0.0);
	void credit(double);
	bool debit(double);
	double getBalance() const;

protected:

	double balance;
};
#endif