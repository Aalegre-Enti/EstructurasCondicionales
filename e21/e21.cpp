// e21.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main() {
    int pizzaType;
    int choice;

    // Ask type of pizza
    std::cout << "Welcome to the pizzeria!" << std::endl;
    std::cout << "What type of pizza would you like?" << std::endl;
    std::cout << "1. Vegetarian" << std::endl;
    std::cout << "2. Non-vegetarian (show all)" << std::endl;
    std::cout << "Option: ";
    std::cin >> pizzaType;

    if (pizzaType == 1) {
        // Vegetarian menu
        std::cout << "You chose vegetarian pizzas:" << std::endl;
        std::cout << "1. Margherita" << std::endl;
        std::cout << "2. Mushrooms" << std::endl;
        std::cout << "3. Vegetables" << std::endl;
        std::cout << "4. Four Cheese" << std::endl;
        std::cout << "Choose your pizza: ";
        std::cin >> choice;

        switch (choice) {
        case 1: std::cout << "Order confirmed: Margherita (vegetarian)." << std::endl; break;
        case 2: std::cout << "Order confirmed: Mushrooms (vegetarian)." << std::endl; break;
        case 3: std::cout << "Order confirmed: Vegetables (vegetarian)." << std::endl; break;
        case 4: std::cout << "Order confirmed: Four Cheese (vegetarian)." << std::endl; break;
        default: std::cout << "That pizza is not on the menu. Program finished." << std::endl;
        }
    }
    else if (pizzaType == 2) {
        // Full menu (8 pizzas)
        std::cout << "You chose all pizzas:" << std::endl;
        std::cout << "1. Margherita (Vegetarian)" << std::endl;
        std::cout << "2. Mushrooms (Vegetarian)" << std::endl;
        std::cout << "3. Vegetables (Vegetarian)" << std::endl;
        std::cout << "4. Four Cheese (Vegetarian)" << std::endl;
        std::cout << "5. Pepperoni" << std::endl;
        std::cout << "6. Ham and Cheese" << std::endl;
        std::cout << "7. Barbecue" << std::endl;
        std::cout << "8. Mexican" << std::endl;
        std::cout << "Choose your pizza: ";
        std::cin >> choice;

        switch (choice) {
        case 1: std::cout << "Order confirmed: Margherita." << std::endl; break;
        case 2: std::cout << "Order confirmed: Mushrooms." << std::endl; break;
        case 3: std::cout << "Order confirmed: Vegetables." << std::endl; break;
        case 4: std::cout << "Order confirmed: Four Cheese." << std::endl; break;
        case 5: std::cout << "Order confirmed: Pepperoni." << std::endl; break;
        case 6: std::cout << "Order confirmed: Ham and Cheese." << std::endl; break;
        case 7: std::cout << "Order confirmed: Barbecue." << std::endl; break;
        case 8: std::cout << "Order confirmed: Mexican." << std::endl; break;
        default: std::cout << "That pizza is not on the menu. Program finished." << std::endl;
        }
    }
    else {
        std::cout << "Invalid option. Program finished." << std::endl;
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
