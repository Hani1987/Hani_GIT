#include <iostream>
#include "FUNCTION_HEADER.h"

using namespace std;


int main()
{
	float n1, n2;
   cout << "Enter First Number: ";
   cin >>  n1 ;
   cout << endl << "Enter Second Number: ";
   cin >>  n2 ;

   calculate(n1, n2);


   return 0;
}

extern FUNCTION_HEADER  void calculate(float num1, float num2)
 {
    	cout<<"Result= "<< num1 + num2 <<endl;
 }
