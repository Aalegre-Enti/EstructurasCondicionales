// e27.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main() {
    int meters;
    std::cout << "Enter a distance in meters: ";
    std::cin >> meters;

    int km = meters / 1000;
    meters = meters % 1000;

    int hm = meters / 100;
    meters = meters % 100;

    int dam = meters / 10;
    meters = meters % 10;

    int m = meters;

    std::cout << "Result: ";

    bool first = true; // para controlar las comas
    if (km > 0) {
        std::cout << km << "km";
        first = false;
    }
    if (hm > 0) {
        if (!first) std::cout << ", ";
        std::cout << hm << "hm";
        first = false;
    }
    if (dam > 0) {
        if (!first) std::cout << ", ";
        std::cout << dam << "dam";
        first = false;
    }
    if (m > 0) {
        if (!first) std::cout << ", ";
        std::cout << m << "m";
    }

    std::cout << std::endl;

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
