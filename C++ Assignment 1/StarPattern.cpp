// 5.15 Drawing patterns with nested for loops
// COSC 2947
// Amanda Bakalarczyk
#include "stdafx.h"
#include <iostream>

int main() {

	// (a)
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {

			if (j <= i) std::cout << "*";

		}
		std::cout << "\n";
	}

	std::cout << "\n";

	// (b)
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {

			if (j >= i) std::cout << "*";

		}
		std::cout << "\n";
	}

	std::cout << "\n";

	// (c)
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {

			if (j < i) std::cout << " ";

		}

		for (int k = 0; k < 10; k++) {

			if (k >= i) std::cout << "*";
		}
		std::cout << "\n";
	}

	std::cout << "\n";

	// (d)
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {

			if (j > i) std::cout << " ";

		}

		for (int k = 0; k < 10; k++) {

			if (k <= i) std::cout << "*";
		}
		std::cout << "\n";
	}

	return 0;
}
