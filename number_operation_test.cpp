#include "number_operations.h"

int main() {
  int fourDigitNumber = 0;

  // Test adding digits
  updateNumber(fourDigitNumber, 3);
  updateNumber(fourDigitNumber, 7);
  printValue(fourDigitNumber);

  // Test clearing and adding a digit
  updateNumber(fourDigitNumber, 0, true); // Clear the number
  updateNumber(fourDigitNumber, 9);
  printValue(fourDigitNumber);

  // Test invalid input
  updateNumber(fourDigitNumber, 15); // Invalid input, should print an error message

  // Test printing without verifying the value
  updateNumber(fourDigitNumber, 2, false, true); // Add 2 and print the value without verifying

  // Test passing scenario
  updateNumber(fourDigitNumber, 2); // Add a valid digit
  updateNumber(fourDigitNumber, 0); // Add another valid digit
  updateNumber(fourDigitNumber, 0); // Add another valid digit
  updateNumber(fourDigitNumber, 0); // Add another valid digit
  printValue(fourDigitNumber);
