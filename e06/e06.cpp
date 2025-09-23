// e06.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
int a, b, c;

int main()
{
    std::cout << "Enter the first side: ";
    std::cin >> a;
    std::cout << "Enter the second side: ";
    std::cin >> b;
    std::cout << "Enter the third side: ";
    std::cin >> c;

    if (a == b && b == c) {
        std::cout << "The triangle is equilateral.\n";
    }
    else if (a == b || a == c || b == c) {
        std::cout << "The triangle is isosceles.\n";
    }
    else {
        std::cout << "The triangle is scalene.\n";
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
