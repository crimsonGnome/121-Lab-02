// Name: Joseph Eggers
// CWID: 885939488
// Email: joseph.eggers@csu.fullerton.edu

#include <iostream>
#include <string>

using std::cin, std::cout, std::string;

int main() {
  // Declare variables
  int pepperoniAmount;
  int onionsAmount;
  int jalapenosAmount;
  string outPutPizza = "\nHere's your pizza!\nPizza with: ";

  // Collect the users inputs
  cout << "How many pepperoni do you want? ";
  cin >> pepperoniAmount;
  cout << "\nHow many onions do you want? ";
  cin >> onionsAmount;
  cout << "\nHow many jalapenos do you want? ";
  cin >> jalapenosAmount;

  // The first if statement is to see if there is any toppings. If there are no
  // toppings the if statement returns no pizza
  if (pepperoniAmount == 0 && onionsAmount == 0 && jalapenosAmount == 0) {
    cout << "\nLooks like you weren't hungry. Maybe next time?";
  } else {
    // since there was a non zero number in the if statement it runs a for loop
    // for each non 0 topping concatenating onto the string

    // only runs if there is an input for peperoni
    for (int i = 0; i < pepperoniAmount; i++) {
      outPutPizza = outPutPizza.append("pepperoni ");
    }
    // only runs if there is an input for onions
    for (int i = 0; i < onionsAmount; i++) {
      outPutPizza = outPutPizza.append("onion ");
    }
    // only runs if there is an input for jalapenos
    for (int i = 0; i < jalapenosAmount; i++) {
      outPutPizza = outPutPizza.append("jalapeno ");
    }
    // runs everytime. This is the output string.
    cout << outPutPizza;
  }
  return 0;
}
