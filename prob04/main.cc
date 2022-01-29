// Namel: Joseph Eggers
// CWID: 885939448
// Email: joseph.eggers@csu.fullerton.edu

#include <iostream>
#include <string>

using std::cin, std::cout, std::string;

int main() {
  // Declare variables
  string operatorValue;
  int one;
  int two;
  int outPut;
  string operationType;

  cout << "Please enter in the operation (+, -, *, /): ";
  cin >> operatorValue;
  cout << "Please input the first number: ";
  cin >> one;
  cout << "Please input the second number: ";
  cin >> two;

  // Using the compare function (method)) attached to sring.
  // If it returns0 its an exact match

  // First check if tis addition
  if (operatorValue.compare("+") == 0) {
    operationType = "add";

    // actually perforrm operation
    outPut = one + two;

    // if not addition then subtraction
  } else if (operatorValue.compare("-") == 0) {
    operationType = "subtract";

    // actually perforrm operation
    outPut = one - two;

    // then check if its multiplication
  } else if (operatorValue.compare("*") == 0) {
    operationType = "multiply";

    // actually perforrm operation
    outPut = one * two;

    // Then Check if its a division
  } else if (operatorValue.compare("/") == 0) {
    operationType = "divide";

    // actually perforrm operation
    outPut = one / two;

  } else {
    // No operation was performed. Invalid input
    cout << "Invalid operation type.\n";
    return 1;
  }

  // Cout the combined string of what I want
  cout << "You chose to " << operationType << ": " << one << " "
       << operatorValue << " " << two << " = " << outPut << "\n";
  return 0;
}
