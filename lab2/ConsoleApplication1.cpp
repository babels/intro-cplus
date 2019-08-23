// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include <iostream>
using namespace std;

void
ComputeExpression()
{
  /* CH 1.6 LS 1.3 */

  cout << "(10.5 + 2 * 3) / (45 - 3.5) = " << (10.5 + 2 * 3) / (45 - 3.5) << endl;
}

void
RuntimeError()
{
  /* CH 1.9 SLST 1.5
 illustrates undefined irational math diving by zero
 changing j to unsigned crashes debugger short of break or cancel */

  int i = 4;
  int j = 0;

  cout << i / j << endl;
}


void
LogicalError()
{
  /* CH 1.9.3 LS 1.6 */

  cout << "Celsius 35 is Fahrenheit degree " << (9 / 5) * 35 + 32 << endl;
  //  cout << "celsius 35 is Fahrenheir degree " << float(9 / 5) * float(35) + 32 << endl;
  cout << "celsius 35 is Fahrenheir degree " << float(9)/5 * 35 + 32 << endl;
  //  cout << "celsius 35 is Fahrenheir degree " << (9.0 / 5) * 35 + 32 << endl;
}

void
Errors()
{
  //RuntimeError();
  LogicalError();
}



/* in this previouse section I learned that C evolved from basic & formatting conventions used for cout.
   I learned that a pipe redirect is asserted with a double wakka as extraction >> and insertion << stream
   did not understand, is "Modiefied Source Code (1.7 pg 39) assembly before its compiled as 
   a binary or is it a cached object like il code, would guess former based on chart */


/* 47) 8/23/19 programming excersizes #47*/

// 1.3 Display pattern

  int diff(int max, int tok, int diff) {
    /* calculates blank space for triangle  for display pattern below 
       no 80s functional declaration allowed in c++ :( my comments suffer  */

    diff = (max - tok) / 2;		// because math

    return diff;
  }


void pline(int diff, int tok, int nl) {
  /* prints given number of blank chars(diff) asteriks(tok), and newline when nl == 1) */

  int difa = diff;		// left side blank
  int difb = diff;		// right side blank

  while( difa >= 0 ) {
     cout << " ";
     difa--;
  }

  while( tok > 0 ) {
     cout << "*";
     tok--;
  }

    while( difb >= 0 ) {
     cout << " ";
     difb--;
  }

  if( nl == 1 )
     cout << "\n";

  //cout << "It Worked!" << endl;

}


void
DisplayPattern()
{ 
  /* displays triangle up and down next to eachother, change variable max && b to get a larger or smaller triangle.
     I learned that functions cannot be called from within another function
     by conventional means, (as you might in c) */

  int a    =   1;			// line one
  int b    =  15;			// line two
  int max  =  15;			// max character


  while( a < (max + 1) ) {

    int itra   =  0;	// line 1 iterator
    int itrab  =  0;    // line 2 iterator
    int diffa  =  0;    // line 1 blank space
    int diffb  =  0;    // line 2 blank space

    diffa = diff(max, a, diffa);
    diffb = diff(max, b, diffb);

    //cout << "diffa " << diffa << " diff b " << diffb << endl;

    pline(diffa, a, 0);	// print line one
    pline(diffb, b, 1); // print line two

    a = a + 2;			// add one char to each side
    b = b - 2;			// subtract one char from each side
  }

  cout << " \n";
}


void
PrintTable()
{
   /*  print 5x multiplication table 3 by 4  == clms[i] *5  
       took me longer than it should have, you can change the values
       of row or tok(*column multiplier*) and the tables will expand to match */

  int col  =  4;		// column

  int row  =  3;		// row
  int tok  =  5;		// start token column

  int tik  = tok;       // start token row

  int r    = tok;		// multiplier row

  int clms[4]  = {5, 10, 25, 50};

  for( int i=0; i<row; i++ ) {  // so many spaces
    int m = tok;

    if( i == 0 ) {

      cout << "p";
    } else {

      cout << "p*" << m;
      m = m + tok;
    }

    cout << "\t";
  }

  cout << endl;
  //  cout << "p\tp*5\tp*10" << endl;

  // will remember c++ likes extra spaces  > )(
  for( int i=0; i<=col-1; i++ ) {

     /* top to bottom, left to right */
     int dim = clms[i];  

     for( int k=1; k<=row; k++) {
        int p = NULL;

        if( k == 1 ) {
           p =  dim;

        } else {
           p =  dim *r; 
           r = r + tok;
        }

        cout << p << "\t";
     }     

     cout << endl;
     r = tok;					// row end > new column
  }

  cout << "table printed" << endl;
}

void
CompExpression(){
  /* CH 1 ex1.5 */
  
  // TODO: Check work on calculator 
  // TODO: locate overflow was getting 99.121 now getting 99.122 and 99.12 keeps going back and forth, w/o chaging function
  cout << "1.2 x 0.1 + 33 x 0.3 over 0.09 + 0.001" << endl;
  float val = float( float(1.2 * 0.1) + float( 3.3 * 0.3 ) / float( 0.009 + 0.001 ) );	// explicit but portable
  cout << "answer " << val << endl;
  cout << "\n";
}

void
OddTen()
{
  /* display sum of first 10 odd numbers */

  int odds = 1;
  for( int i=0; i<=10; i++ ) {
     if( i % 2 != 0 ) {
        cout << i << "+" << endl;
        odds = odds + i;
     }
  }

  cout << "SUM:  " << odds << endl;
  cout << "\n";
}


void
iLikePie(){
  /* example of using square root to break down pi */

  double a  =  1.0 / 4;
  double b  =  1.0 / 9;
  double c  =  1.0 / 16;
  double d  =  1.0 / 25;
  double x  =  1.0 / 36.0;

  double e  =  6.0 * double(1.0 + a + b + c + d);
  double f  =  sqrt(e);		// had to look up that part

  //  double g  = 6.0 * double(1.0 + a + b + c + d);
  double g  =  6.0 * double(1.0 + a + b + c + d + x);
  double h  =  sqrt(g);


  cout << "pi one " << f << endl;
  cout << "pi two " << h << endl; 

  cout << "\n";
}


int
main()
{
  ComputeExpression();
  //Errors();
  DisplayPattern();
  PrintTable();
  CompExpression();
  OddTen();
  iLikePie();

  return 0;
}