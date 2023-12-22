#include "number_operations.h"
#include <iostream>

// Implementation of the functions declared in number_operations.h

bool verifyRange(int fourDigitNumber) {
  return (fourDigitNumber >= 2000 && fourDigitNumber <= 6000);
}

bool updateNumber(int &fourDigitNumber, int singleDigitNumber, bool clear, bool printValidValue) {
  bool success = true; // Indicates whether the update was successful

  if (clear) {
    fourDigitNumber = 0;
    std::cout << "Cleared the 4-digit number." << std::endl;
  } else {
    if (singleDigitNumber >= 0 && singleDigitNumber <= 9) {
      fourDigitNumber *= 10;
      fourDigitNumber += singleDigitNumber;

      std::cout << "Added digit " << singleDigitNumber << ". New number: " << fourDigitNumber << std::endl;

      if (!verifyRange(fourDigitNumber)) {
        std::cout << "Warning: The number is outside the range [2000, 6000]." << std::endl;
        success = false; // Indicates unsuccessful update
      }
    } else {
      std::cout << "Invalid input. Please enter a single-digit number." << std::endl;
      success = false; // Indicates unsuccessful update
    }
  }

  if (printValidValue && success) {
    printValue(fourDigitNumber);
  }

  return success; // Indicates successful or unsuccessful update
}

void printValue(int fourDigitNumber) {
  if (verifyRange(fourDigitNumber)) {
    std::cout << "Current 4-digit number: " << fourDigitNumber << std::endl;
  } else {
    std::cout << "Cannot print. The number is outside the range [2000, 6000]." << std::endl;
  }
}
