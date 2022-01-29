#include <iostream>
#include <string>

#include "cpputils/graphics/image.h"
#include "pizza.h"

using graphics::Image;
using std::cin, std::cout;

int main() {
  char pizza;
  char tomatoSauce;
  char cheese;
  char pepperoni;
  char jalapeno;
  char onion;
  const int imageWidth = 500;
  const int imageHeight = 500;

  cout << "Welcome to PizzaMaker 2.0!" << std::endl;
  cout << "\nWould you like a pizza?";
  cin >> pizza;
  cout << "\nWould you like tomato sauce?";
  cin >> tomatoSauce;
  cout << "\nWould you like cheese with that?";
  cin >> cheese;
  cout << "\nWould you like pepperoni?";
  cin >> pepperoni;
  cout << "\nWould you like jalapeno?";
  cin >> jalapeno;
  cout << "\nWould you like onion? ";
  cin >> onion;
  cout << "Great! Your pizza is at pizza.bmp. Enjoy!\n";

  // Creating Image with the Image width in the first input and the width
  Image my_image(imageWidth, imageHeight);

  // If the want to pizza Make a pizza. IF they do not want a pizza skip all the
  // options ofr the pizza
  if (pizza == 'y') {
    AddCrust(my_image);

    // If tomatoSauce is a yes, then add tomatoSauce
    if (tomatoSauce == 'y') {
      AddSauce(my_image);
    }
    // If cheese is a yes, then add cheese
    if (cheese == 'y') {
      AddCheese(my_image);
    }
    // If pepperoni is a yes, then add pepperoni
    if (pepperoni == 'y') {
      AddPepperoni(my_image);
    }

    // If jalapeno is a yes, then add jalapeno
    if (jalapeno == 'y') {
      AddJalapeno(my_image);
    }

    // If garlic is a yes, then add garlic
    if (onion == 'y') {
      AddOnion(my_image);
    }
    // Saving Image to file location and using the class method
    my_image.SaveImageBmp("pizza.bmp");
  }

  // Add your code here to ask the user what kind of pizza they want,
  // and create that pizza for them.

  return 0;
}
