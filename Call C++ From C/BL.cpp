#include <iostream>
#include "FUNCTION_HEADER.h"

using namespace std;


int main()
{
   cout << "Hello World";
   calculate(3, 5);
   return 0;
}


extern FUNCTION_HEADER  void calculate(float num1, float num2)
{
   float result = 0;
   result = num1 + num2 *3;

   printf("\t\tRESULT= %0.2f", result);
}
