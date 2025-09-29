// e29.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>

int main() {
    float salary, performance = 0.0;
    float clean, education, punctuality, tasks, boss;

    std::cout << "Enter base salary: ";
    std::cin >> salary;

    std::cout << "Enter performance for workplace cleaning (-0.2 to 0.2): ";
    std::cin >> clean;
    performance += clean;

    std::cout << "Enter performance for education (-0.1 to 0.1): ";
    std::cin >> education;
    performance += education;

    std::cout << "Enter performance for punctuality (-0.15 to 0.15): ";
    std::cin >> punctuality;
    performance += punctuality;

    std::cout << "Enter performance for task polishing (-0.25 to 0.25): ";
    std::cin >> tasks;
    performance += tasks;

    std::cout << "Enter performance for boss flattering (-0.3 to 0.3): ";
    std::cin >> boss;
    performance += boss;

    // Cap performance between -1 and 1
    if (performance > 1.0) performance = 1.0;
    if (performance < -1.0) performance = -1.0;

    // Maximum increase = 25% when performance = 1
    float factor = performance * 0.25;

    // Salary cannot decrease
    if (factor < 0) factor = 0;

    float finalSalary = salary * (1 + factor);

    std::cout << "Final salary: " << finalSalary << " euros" << std::endl;

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
