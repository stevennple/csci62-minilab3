#include <iostream>
#include "myclass.h"

using namespace std;

int main () {
  cout << "Hello World" << endl;

  // Line skip
  cout << endl << endl; 

  // Another useless comment for #7
  MyClass a(5);

  // Add and commit for #8.6a
  cout << a.getX() << endl; // change for #8
}
