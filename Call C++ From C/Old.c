#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include "FUNCTION_HEADER.h"

int main()
{
	calculate(5.3, 1.3);

   return 0;
}
extern FUNCTION_HEADER void calculate(float num1, float num2)
{
  printf("\n\t I am from old C: %.2f\n\n", num1*num2);
}
