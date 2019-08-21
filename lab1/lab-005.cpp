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
maina()
{
  // "<" wakka > inserton operator
  cout << "Hello World" << endl;
  return 0;
}

int
mainb()
{
  // "<" wakka > inserton operator
  cout << "Computer science is fun" << endl;
  return 0;
}

int
mainc()
{
  // "<" wakka > inserton operator
  int i = 0;
  while( i < 5 ) {
     cout << "Computer science is fun" << endl;
     i++;
  }
  return 0;
}

// main function
int
maind()
{
  // "<" wakka > inserton operator
  cout << "  +++     +      +"  << endl;
  cout << " +   +    +      +"  << endl;
  cout << "+       +++++  +++++" << endl;
  cout << " +        +      + " << endl;
  cout << "  +++     +      +"  << endl;
  return 0;
}



// main function
int
maine()
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


int
main()
{
  maina();
  mainb();
  mainc();
  maind();
  maine();

  return 0;
}
