// Fibonacci.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace  std;

int main()
{
	cout << "I will write the first n values of the Fibonacci sequence. \nPlease enter a value for n:";
	int n;
	cin >> n;
	cout << "\n";
	int i = 2;
	int fst = 1;
	int scnd = 0;
	int next;
	cout << "The first " << n << " numbers of the Fibonacci sequence are: \n";

	cout << fst << " ";

	while (i <= n) {
		next = fst + scnd;
		cout << next << " ";
		scnd = fst;
		fst = next;
		i = i + 1;
	}

	cout << "\n";
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
