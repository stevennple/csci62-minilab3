#include <iostream>
#include "myclass.h"

using namespace std;

int main () {
  cout << "Hello World" << endl;

  // Line skip
  cout << endl << endl; 

  // Another useless comment for #7
  MyClass a(5);
  cout << a.getX() << endl;
}
