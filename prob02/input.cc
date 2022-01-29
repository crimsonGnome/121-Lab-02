// Name: Joseph Eggers
// CWID: 885939488
// Email: joseph.eggers@csu.fullerton.edu

#include <iostream>
#include <string>
using std::cin, std::cout, std::string;

bool GetYesOrNoInput() {
  bool userInputedCorrect = false;
  string response;

  // When the users doesn't put yes or no exactly then the loop will continue
  while (userInputedCorrect == false) {
    cin >> response;

    // If yes then Break loop and return true
    if (response == "yes") {
      return true;

      // If no break loop and return false
    } else if (response == "no") {
      return false;

      // Else continue loop
    } else {
      cout << "\nSorry, I didn't understand. Try again: ";
    }
  }
  return true;
}
