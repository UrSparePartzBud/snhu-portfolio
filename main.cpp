/*
 * Developer: Stephen Hope
 * Date: February 22, 2026
 * Purpose: Main driver and user menu for the Corner Grocer app.
 */

#include <iostream>
#include <limits>
#include <string>
#include "GroceryTracker.h"

using namespace std;

void displayMenu() {
    cout << "\n========== Corner Grocer ==========" << endl;
    cout << "1. Find frequency of a specific item" << endl;
    cout << "2. Print all item frequencies" << endl;
    cout << "3. Print histogram" << endl;
    cout << "4. Exit program" << endl;
    cout << "===================================" << endl;
    cout << "Enter your choice: ";
}

int main() {
    GroceryTracker tracker;

    // 1. Process the input file
    tracker.processInputFile("CS210_Project_Three_Input_File.txt");

    // 2. Create the backup file immediately without user intervention
    tracker.createBackupFile("frequency.dat");

    int choice = 0;
    string searchItem;

    while (choice != 4) {
        displayMenu();
        
        // Input validation to prevent crashes if user types a letter or symbol
        if (!(cin >> choice)) {
            cout << "\nInvalid input. Please enter a number 1-4.\n" << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            continue;
        }

        switch (choice) {
            case 1:
                cout << "Enter the item you wish to search for: ";
                cin >> searchItem;
                
                // Format the user's input to match the text file (e.g., "apples" -> "Apples")
                if (!searchItem.empty()) {
                    searchItem[0] = toupper(searchItem[0]);
                    for (size_t i = 1; i < searchItem.length(); ++i) {
                        searchItem[i] = tolower(searchItem[i]);
                    }
                }
                
                cout << "\n" << searchItem << " were purchased " << tracker.getItemFrequency(searchItem) << " times.\n" << endl;
                break;
            case 2:
                tracker.printAllFrequencies();
                break;
            case 3:
                tracker.printHistogram();
                break;
            case 4:
                cout << "\nExiting program. Have a great day!" << endl;
                break;
            default:
                cout << "\nInvalid option. Please choose 1, 2, 3, or 4.\n" << endl;
                break;
        }
    }

    return 0;
}