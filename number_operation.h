#ifndef NUMBER_OPERATIONS_H
#define NUMBER_OPERATIONS_H

// Function to add a single-digit number to a 4-digit number, clear, and verify the range
bool updateNumber(int &fourDigitNumber, int singleDigitNumber, bool clear = false, bool printValidValue = false);

// Function to print the 4-digit number to the screen if it is within the specified range
void printValue(int fourDigitNumber);

#endif // NUMBER_OPERATIONS_H
