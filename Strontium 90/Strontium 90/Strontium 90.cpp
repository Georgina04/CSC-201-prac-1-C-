// Strontium 90.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;


int main()
{
	cout << "Radioactive decay of 50g of Strontium 90: \n\n";

	int i = 0;
	float s90 = 50.0000;
	float s901 = 50.0000;

	while (s901 >= 25.0000) {
		s901 = s90 - (s90 * (i * 0.024));
		cout << i << " " << s901 << "g remaining \n";
		i = i + 1;
	}
	
	cout << "\n";
	float remain = (s901 / s90) * 100;
	cout << "Half-life is approximately " << i - 1 << " years. \nAmount remaining = " << remain << "% \n";

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
