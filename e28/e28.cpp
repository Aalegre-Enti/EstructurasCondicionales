// e28.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main() {
    float annualIncome, retentionRate, annualNet, monthlyNet;

    std::cout << "Enter your annual income in euros: ";
    std::cin >> annualIncome;

    if (annualIncome <= 6000) {
        retentionRate = 0.0f;
    }
    else if (annualIncome <= 12500) {
        retentionRate = 0.15f;
    }
    else if (annualIncome <= 21000) {
        retentionRate = 0.25f;
    }
    else if (annualIncome <= 32200) {
        retentionRate = 0.34f;
    }
    else if (annualIncome <= 50000) {
        retentionRate = 0.45f;
    }
    else if (annualIncome <= 300000) {
        retentionRate = 0.52f;
    }
    else {
        retentionRate = 0.55f;
    }

    // calcular sueldo neto anual y mensual
    annualNet = annualIncome * (1 - retentionRate);
    monthlyNet = annualNet / 12.0f;

    std::cout << "Retention applied: " << (retentionRate * 100) << "%" << std::endl;
    std::cout << "Net monthly salary: " << monthlyNet << " euros" << std::endl;

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
