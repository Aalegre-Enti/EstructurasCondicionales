// e10.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

bool toggleA;
bool toggleB;
bool toggleC;

int main()
{
	std::cout << "Toggle switches A, B and C.\n";
	std::cout << "Switch A: ";
	std::cin >> toggleA;
	std::cout << "Switch B: ";
	std::cin >> toggleB;
	std::cout << "Switch C: ";
	std::cin >> toggleC;
	if (toggleA && toggleB && !toggleC) {
		std::cout << "Light is ON.\n";
	}
	else if (!toggleA && toggleB && toggleC) {
		std::cout << "Light is ON.\n";
	}
	else {
		std::cout << "Light is OFF.\n";
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
