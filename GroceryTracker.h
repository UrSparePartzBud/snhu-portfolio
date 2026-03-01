/*
 * Developer: Stephen Hope
 * Date: February 22, 2026
 * Purpose: Header file for GroceryTracker class. Defines the blueprint.
 */

#ifndef GROCERY_TRACKER_H
#define GROCERY_TRACKER_H

#include <string>
#include <map>

class GroceryTracker {
public:
    // Constructor
    GroceryTracker();

    // Core functionality methods to handle the files
    void processInputFile(const std::string& fileName);
    void createBackupFile(const std::string& backupFileName);
    
    // Menu Option Methods
    int getItemFrequency(const std::string& item);
    void printAllFrequencies();
    void printHistogram();

private:
    // Map to store item names as keys and their frequencies as values
    std::map<std::string, int> itemFrequencies;
};

#endif