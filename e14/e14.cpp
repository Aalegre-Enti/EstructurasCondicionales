// e14.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */
int a;
int b;
int number;

int main()
{
	srand(time(NULL));
	a = rand() % (10 - 1) + 1;
	b = rand() % (10 - 1) + 1;
	std::cout << "Random number A between 1 and 10: " << a << "\n";
	std::cout << "Random number B between 1 and 10: " << b << "\n";
	std::cout << "What is the product of A and B?\n";
	std::cin >> number;
	if(number == a * b) {
		std::cout << "Correct!\n";
	}
	else {
		std::cout << "Incorrect. The correct answer is " << a * b << ".\n";
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
