//Example C++ Code
//1. Enter Number

#include <iostream>

// Function to verify that the 4-digit number is between 2000 and 6000
bool verifyRange(int fourDigitNumber) {
    return (fourDigitNumber >= 2000 && fourDigitNumber <= 6000);
}

// Function to add a single-digit number to a 4-digit number
void addDigit(int &fourDigitNumber, int singleDigitNumber) {
    // Check if the input is a single-digit number
    if (singleDigitNumber >= 0 && singleDigitNumber <= 9) {
        // Shift the current number to the left to make room for the new digit
        fourDigitNumber *= 10;
        // Add the new digit to the number
        fourDigitNumber += singleDigitNumber;

        std::cout << "Added digit " << singleDigitNumber << ". New number: " << fourDigitNumber << std::endl;

    } else {
        std::cout << "Invalid input. Please enter a single-digit number." << std::endl;
    }
}

// Function to clear the 4-digit number
void clearNumber(int &fourDigitNumber) {
    fourDigitNumber = 0;
    std::cout << "Cleared the 4-digit number." << std::endl;
}

// Function to print the 4-digit number to the screen if it is within the specified range
void printValue(int fourDigitNumber) {
    if (verifyRange(fourDigitNumber)) {
        std::cout << "Current 4-digit number: " << fourDigitNumber << std::endl;
    } else {
        std::cout << "Cannot print. The number is outside the range [2000, 6000]." << std::endl;
    }
}

int main() {
    // Example usage
    int fourDigitNumber = 0;

    addDigit(fourDigitNumber, 3); // Adds 3 to the number
    addDigit(fourDigitNumber, 7); // Adds 7 to the number
    printValue(fourDigitNumber);  // Prints the current value
    clearNumber(fourDigitNumber); // Clears the number
    addDigit(fourDigitNumber, 9); // Adds 9 to the number
    printValue(fourDigitNumber);  // Prints the current value

    return 0;
}
