// e20.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
int figure;

float value;

int main()
{
	std::cout << "Choose a figure to calculate the area (1: circle, 2: square, 3: triangle):\n";
	std::cin >> figure;
	switch (figure) {
	case 1:
		std::cout << "Enter the radius of the circle: ";
		std::cin >> value;
		std::cout << "The area of the circle is: " << 3.14159f * value * value << "\n";
		break;
	case 2:
		std::cout << "Enter the side length of the square: ";
		std::cin >> value;
		std::cout << "The area of the square is: " << value * value << "\n";
		break;
	case 3:
		std::cout << "Enter the side length of the triangle: ";
		std::cin >> value;
		std::cout << "The area of the triangle is: " << (sqrt(3) / 4) * value * value << "\n";
		break;
	default:
		std::cout << "Error: Invalid figure selection.\n";
		break;
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
