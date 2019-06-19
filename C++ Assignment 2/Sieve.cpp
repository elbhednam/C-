// Amanda Bakalarczyk
// COSC 2947
// Assignment 2
// Question 3: 7.27

#include "stdafx.h"
#include <iostream>
using namespace std;

int main() {

	int n;
	cout << "Enter the prime ceiling: ";
	cin >> n;
	const int size{ n };
	
	// Create boolean-ish array
	int* primes = new int[size];

	for (int i = 1; i < n; i++) {
		*(primes + i) = 1; // from index 1, set all array elements to 1
	}

	// Check numbers from 2 to n for primality
	for (int i = 2; i <= n; i++) {
		
		// Display i if primes[i - 1] is 1 (prime)
		if (*(primes + i - 1) == 1) cout << endl << i;
		
		// Increment loop by multiples of i
		// Set all multiples of i to 0 (not prime) 
		for (int j = i * i; j <= n; j += i) {
			*(primes + j - 1) = 0;
		}
	}

	cout << endl;
}

