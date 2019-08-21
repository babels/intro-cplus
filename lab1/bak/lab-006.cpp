/* File: lab-001.cpp  Hello World
Name:		James Bailey
Date:		8/20/19
Compiler:	GNU-g++ c15
Depends:	None
Desceiption:	Hello World */

// directives
#include <iostream>
using namespace std;

// main function
int
main()
{
  // "<" wakka > inserton operator
  int i=1;
  while( i < 5 ) {
  int a = i * 1;
  int b = i * i;
  int c = i * i * i;

  // incomplete I finished after class
  cout << a << " " << b << " " << c << endl;
  i++;
  }
  return 0;
}


