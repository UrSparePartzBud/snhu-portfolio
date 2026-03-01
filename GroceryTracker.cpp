/*
 * Developer: Stephen Hope
 * Date: February 22, 2026
 * Purpose: Implementation of GroceryTracker logic using std::map.
 */

#include "GroceryTracker.h"
#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

// Constructor
GroceryTracker::GroceryTracker() {
    // Default constructor, nothing special needed here
}

// Reads the input file and populates the map
void GroceryTracker::processInputFile(const string& fileName) {
    ifstream inFS(fileName);
    string item;

    if (!inFS.is_open()) {
        cout << "Error: Could not open " << fileName << endl;
        return;
    }

    // Read each word. The map automatically adds new items or increments existing ones.
    while (inFS >> item) {
        itemFrequencies[item]++;
    }
    inFS.close();
}

// Data File Creation: Backs up the map data to a file 
void GroceryTracker::createBackupFile(const string& backupFileName) {
    ofstream outFS(backupFileName);

    if (!outFS.is_open()) {
        cout << "Error: Could not create backup file." << endl;
        return;
    }

    // Iterate through the map and write each pair to the file
    for (auto const& pair : itemFrequencies) {
        outFS << pair.first << " " << pair.second << endl;
    }
    outFS.close();
}

// Menu Option 1: Returns the frequency of a specific word
int GroceryTracker::getItemFrequency(const string& item) {
    // count() checks if the key exists to prevent adding empty keys to the map by accident
    if (itemFrequencies.count(item) > 0) {
        return itemFrequencies.at(item);
    }
    return 0; // Return 0 if the item wasn't found
}

// Menu Option 2: Prints all items and their frequencies
void GroceryTracker::printAllFrequencies() {
    cout << "\n--- All Item Frequencies ---" << endl;
    for (auto const& pair : itemFrequencies) {
        cout << pair.first << " " << pair.second << endl;
    }
    cout << "----------------------------\n" << endl;
}

// Menu Option 3: Prints a histogram using asterisks
void GroceryTracker::printHistogram() {
    cout << "\n--- Item Frequency Histogram ---" << endl;
    for (auto const& pair : itemFrequencies) {
        // setw(15) aligns the item names so the asterisks start at the exact same column
        cout << setw(15) << left << pair.first << " ";
        
        // Print an asterisk for each count
        for (int i = 0; i < pair.second; ++i) {
            cout << "*";
        }
        cout << endl;
    }
    cout << "--------------------------------\n" << endl;
}