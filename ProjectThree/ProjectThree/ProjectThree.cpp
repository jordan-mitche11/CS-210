/*
Author: Jordan Mitchell
Date: 10/12/2023
CS-210
Project Three
*/


#include <string>
#include <iostream>
#include <fstream>
#include <map>

using namespace std;

class ItemTracker {
public:
    // Constructor
    ItemTracker() {
        // Opens input file
        ifstream input(inputFile);
        string item;
        // If the input file cannot be opened
        if (!input) { 
            cout << "Could not open the input file.";
        }
        // Write to map
        while (input >> item) { 
            itemCount[item]++;
        }
        // Closes file
        input.close(); 

        // Writes to the data file
        ofstream output(outputFile); 
        output.open(outputFile, ios::app);
        for (auto count = itemCount.begin(); count != itemCount.end(); count++) {
            output << count->first << " " << count->second << endl;
        }
        output.close();
    }
    // Retrieves the frequency
    int GetFrequency(string item) { 
        // Returns int for frequency 
        return itemCount[item]; 
    }

    void printListNumbered() {
        // Loops from beginning to end
        for (auto count = itemCount.begin(); count != itemCount.end(); count++) { 
            // Output list in numbered format
            cout << count->first << " " << count->second << endl; 
        }
    }

    void printListHistogram() {
        // Loops from beginning to end
        for (auto count = itemCount.begin(); count != itemCount.end(); count++) {
            // First output name
            cout << count->first << " "; 
            for (int i = 0; i < count->second; i++) {
                // Second output symbol
                cout << "#"; 
            }
            cout << endl;
        }
    }

private:
    // Set name for input + output file
    string outputFile = "frequency.dat"; 
    const string inputFile = "CS210_Project_Three_Input_File.txt";
    // Create map
    map<string, int> itemCount; 
};

// Output menu functions
void PrintMenu() { 
    cout << "Menu:" << endl;
    cout << "1. Search for an item" << endl;
    cout << "2. Print list of items with number of frequency (ex. Strawberries - 3)" << endl;
    cout << "3. Print list of items with frequency shown by pound symbol (ex. Strawberries ###)" << endl;
    cout << "4. Exit program" << endl;
    cout << "Please enter a number 1-4" << endl;
}

int main() {
    // Exception mask
    cin.exceptions(ios::failbit); 
    // New item
    ItemTracker groceryItem; 

    // Variable user input
    int userInput; 
    ofstream outfile("frequency.dat");
    // Loop to end program when "4" is input
    do {  
        PrintMenu();
        // Try Catch statement to in case input variable is not valid
        try {  
            cin >> userInput;
        }
        catch (ios_base::failure& e) {
            // Set input for default case
            userInput = 0; 
            cin.clear();
            cin.ignore(100, '\n');
        }
        // Switch statement
        switch (userInput) {  
        case 1: {
            string gItem;
            cout << "Input the item you want to search (Be sure to capitalize the first letter): ";
            cin >> gItem;
            // Retrieve frequency of grocery items
            int frequency = groceryItem.GetFrequency(gItem);  
            cout << gItem << " appears " << frequency << " times." << endl;
            break;
        }
        case 2: {
            groceryItem.printListNumbered();
            break;
        }
        case 3: {
            groceryItem.printListHistogram();
            break;
        }
        case 4: {
            cout << "Exiting program now. Goodbye.." << endl;
            break;
        }
        default: {
            cout << "Invalid input, please try again." << endl;
            break;
        }
        }

    } while (userInput != 4);
    return 0;
}
