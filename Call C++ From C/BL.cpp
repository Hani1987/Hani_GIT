#include <iostream>
#include <string>
#include "FUNCTION_HEADER.h"
#include "Human.h"

using namespace std;


int main()
{
   Student hani();
   Student Ali(135, "Name", "afsd", "sfdg", "orjwg");

   Ali.ShowData();



//**************************************************************//

   return 0;
}

extern FUNCTION_HEADER  void calculate(float num1, float num2)
 {
   cout<<"\t\nResult= "<< num1 + num2 <<endl;
 }

