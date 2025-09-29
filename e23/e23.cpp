// e23.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main() {
    char sex;
    int age;

    std::cout << "Enter your sex (M for male, F for female): ";
    std::cin >> sex;

    std::cout << "Enter your age: ";
    std::cin >> age;

    switch (sex) {
    case 'M':
    case 'm':
        if (age < 35) {
            std::cout << "You belong to Group A (men under 35)." << std::endl;
        }
        else {
            std::cout << "You belong to Group C." << std::endl;
        }
        break;

    case 'F':
    case 'f':
        if (age < 40) {
            std::cout << "You belong to Group B (women under 40)." << std::endl;
        }
        else {
            std::cout << "You belong to Group C." << std::endl;
        }
        break;

    default:
        std::cout << "Invalid input for sex." << std::endl;
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
