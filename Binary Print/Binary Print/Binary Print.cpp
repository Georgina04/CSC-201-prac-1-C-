// Binary Print.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	bool c = true;
	cout << "Binary print \n";

	while (c == true) {
		cout << "\nEnter n: ";
		int n;
		cin >> n;

		if (n < 0) { break; }

		if (n == 0) { cout << 0 << "\n"; }

		else {
			while (n != 1) {
				if (n % 2 == 0) {
					cout << 0;
					n = n / 2;
				}
				else {
					cout << 1;
					n = n / 2;
				}
			}

			cout << 1 << "\n";
		}
		
	}
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
