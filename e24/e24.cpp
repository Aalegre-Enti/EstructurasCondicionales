// e24.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

int main() {
    std::string donor, recipient;

    std::cout << "Possible blood types: O, A, B, AB" << std::endl;
    std::cout << "Enter your blood type (donor): ";
    std::cin >> donor;
    std::cout << "Enter the blood type you want to donate to (recipient): ";
    std::cin >> recipient;

    bool possible = false;

    if (donor == "O") {
        // O can donate to everyone
        std::cout << "Donation IS possible." << std::endl;
    }
    else if (donor == "A") {
        if (recipient == "A" || recipient == "AB")
            std::cout << "Donation IS possible." << std::endl;
        else
            std::cout << "Donation is NOT possible." << std::endl;
    }
    else if (donor == "B") {
        if (recipient == "B" || recipient == "AB")
            std::cout << "Donation IS possible." << std::endl;
        else
            std::cout << "Donation is NOT possible." << std::endl;
    }
    else if (donor == "AB") {
        if (recipient == "AB")
            std::cout << "Donation IS possible." << std::endl;
        else
            std::cout << "Donation is NOT possible." << std::endl;
    }
    else {
        std::cout << "Invalid blood type." << std::endl;
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
