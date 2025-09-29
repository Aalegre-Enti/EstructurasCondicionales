// e25.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main() {
    int age1, age2, age3, age4, age5;
    float total = 0.0;

    std::cout << "Enter the age of diner 1: ";
    std::cin >> age1;
    if (age1 < 4) total += 0.0;
    else if (age1 <= 17) total += 9.0;
    else total += 18.95;

    std::cout << "Enter the age of diner 2: ";
    std::cin >> age2;
    if (age2 < 4) total += 0.0;
    else if (age2 <= 17) total += 9.0;
    else total += 18.95;

    std::cout << "Enter the age of diner 3: ";
    std::cin >> age3;
    if (age3 < 4) total += 0.0;
    else if (age3 <= 17) total += 9.0;
    else total += 18.95;

    std::cout << "Enter the age of diner 4: ";
    std::cin >> age4;
    if (age4 < 4) total += 0.0;
    else if (age4 <= 17) total += 9.0;
    else total += 18.95;

    std::cout << "Enter the age of diner 5: ";
    std::cin >> age5;
    if (age5 < 4) total += 0.0;
    else if (age5 <= 17) total += 9.0;
    else total += 18.95;

    std::cout << "Total profit: " << total << " euros." << std::endl;

    return 0;
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
