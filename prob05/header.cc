// Name: Joseph Eggers
// CWID: 885939488
// Email: joseph.eggers@csu.fullerton.edu
#include "header.h"

#include <iostream>
#include <string>
using std::cout, std::string;

void DisplayHeader(string txt) {
  // Declare Variabeles
  string asteriskMaker;
  // This makes the srtring +4 due to the "* " and " *" asterisk and the space
  const int asteriskCushion = 4;
  // Loop length + the 4 extra characters
  const int loopLength = txt.length() + asteriskCushion;

  // for loop making the Asterisk lines
  for (int i = 0; i < loopLength; i++) {
    asteriskMaker.append("*");
  }
  // cout box
  cout << asteriskMaker << "\n* " << txt << " *\n" << asteriskMaker << "\n";
}

bool WithinWidth(string txt, unsigned short x) {
  // if the the length of the the text is less then are = to the width display
  // true else return false
  if (txt.length() <= x) return true;
  return false;
}
