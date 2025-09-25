// e09.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
#include <string>
using namespace std;


int main()
{
    string ing1 = "potato";
    string ing2 = "egg";
    string ing3 = "onion";
    string ing4 = "oil";
    string ing5 = "salt";

    // Track if already mentioned
    bool used1 = false, used2 = false, used3 = false, used4 = false, used5 = false;

    string input;

    cout << "You must write the 5 ingredients of a Spanish omelette with onion." << endl;

    // 1st input
    cout << "Ingredient 1: ";
    cin >> input;
    if (input == ing1 && !used1) { used1 = true; cout << "Correct: potato.\n"; }
    else if (input == ing2 && !used2) { used2 = true; cout << "Correct: egg.\n"; }
    else if (input == ing3 && !used3) { used3 = true; cout << "Correct: onion.\n"; }
    else if (input == ing4 && !used4) { used4 = true; cout << "Correct: oil.\n"; }
    else if (input == ing5 && !used5) { used5 = true; cout << "Correct: salt.\n"; }
    else if (input == ing1 && used1) cout << "You already mentioned potato.\n";
    else if (input == ing2 && used2) cout << "You already mentioned egg.\n";
    else if (input == ing3 && used3) cout << "You already mentioned onion.\n";
    else if (input == ing4 && used4) cout << "You already mentioned oil.\n";
    else if (input == ing5 && used5) cout << "You already mentioned salt.\n";
    else cout << "That ingredient is not part of the recipe.\n";

    // 2nd input
    cout << "Ingredient 2: ";
    cin >> input;
    if (input == ing1 && !used1) { used1 = true; cout << "Correct: potato.\n"; }
    else if (input == ing2 && !used2) { used2 = true; cout << "Correct: egg.\n"; }
    else if (input == ing3 && !used3) { used3 = true; cout << "Correct: onion.\n"; }
    else if (input == ing4 && !used4) { used4 = true; cout << "Correct: oil.\n"; }
    else if (input == ing5 && !used5) { used5 = true; cout << "Correct: salt.\n"; }
    else if (input == ing1 && used1) cout << "You already mentioned potato.\n";
    else if (input == ing2 && used2) cout << "You already mentioned egg.\n";
    else if (input == ing3 && used3) cout << "You already mentioned onion.\n";
    else if (input == ing4 && used4) cout << "You already mentioned oil.\n";
    else if (input == ing5 && used5) cout << "You already mentioned salt.\n";
    else cout << "That ingredient is not part of the recipe.\n";

    // 3rd input
    cout << "Ingredient 3: ";
    cin >> input;
    if (input == ing1 && !used1) { used1 = true; cout << "Correct: potato.\n"; }
    else if (input == ing2 && !used2) { used2 = true; cout << "Correct: egg.\n"; }
    else if (input == ing3 && !used3) { used3 = true; cout << "Correct: onion.\n"; }
    else if (input == ing4 && !used4) { used4 = true; cout << "Correct: oil.\n"; }
    else if (input == ing5 && !used5) { used5 = true; cout << "Correct: salt.\n"; }
    else if (input == ing1 && used1) cout << "You already mentioned potato.\n";
    else if (input == ing2 && used2) cout << "You already mentioned egg.\n";
    else if (input == ing3 && used3) cout << "You already mentioned onion.\n";
    else if (input == ing4 && used4) cout << "You already mentioned oil.\n";
    else if (input == ing5 && used5) cout << "You already mentioned salt.\n";
    else cout << "That ingredient is not part of the recipe.\n";

    // 4th input
    cout << "Ingredient 4: ";
    cin >> input;
    if (input == ing1 && !used1) { used1 = true; cout << "Correct: potato.\n"; }
    else if (input == ing2 && !used2) { used2 = true; cout << "Correct: egg.\n"; }
    else if (input == ing3 && !used3) { used3 = true; cout << "Correct: onion.\n"; }
    else if (input == ing4 && !used4) { used4 = true; cout << "Correct: oil.\n"; }
    else if (input == ing5 && !used5) { used5 = true; cout << "Correct: salt.\n"; }
    else if (input == ing1 && used1) cout << "You already mentioned potato.\n";
    else if (input == ing2 && used2) cout << "You already mentioned egg.\n";
    else if (input == ing3 && used3) cout << "You already mentioned onion.\n";
    else if (input == ing4 && used4) cout << "You already mentioned oil.\n";
    else if (input == ing5 && used5) cout << "You already mentioned salt.\n";
    else cout << "That ingredient is not part of the recipe.\n";

    // 5th input
    cout << "Ingredient 5: ";
    cin >> input;
    if (input == ing1 && !used1) { used1 = true; cout << "Correct: potato.\n"; }
    else if (input == ing2 && !used2) { used2 = true; cout << "Correct: egg.\n"; }
    else if (input == ing3 && !used3) { used3 = true; cout << "Correct: onion.\n"; }
    else if (input == ing4 && !used4) { used4 = true; cout << "Correct: oil.\n"; }
    else if (input == ing5 && !used5) { used5 = true; cout << "Correct: salt.\n"; }
    else if (input == ing1 && used1) cout << "You already mentioned potato.\n";
    else if (input == ing2 && used2) cout << "You already mentioned egg.\n";
    else if (input == ing3 && used3) cout << "You already mentioned onion.\n";
    else if (input == ing4 && used4) cout << "You already mentioned oil.\n";
    else if (input == ing5 && used5) cout << "You already mentioned salt.\n";
    else cout << "That ingredient is not part of the recipe.\n";

    cout << "Game over. The correct ingredients are: potato, egg, onion, oil and salt." << endl;

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
