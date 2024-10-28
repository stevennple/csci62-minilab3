#include <iostream>
#include "myclass.h"

using namespace std;

int main () {
  cout << "Hello World" << endl;

  // Line skip
  cout << endl << endl; 

  MyClass a(5);
  cout << a.getX() << endl;
}
