#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<math.h>
#include<string.h>


void GUI();
void Interface(float *number1, float *number2);
void BusinessLogic(float *number1, float *number2, char ch);

int main()
{
	GUI();

    return 0;
}

void GUI()
{
  float number_1; float number_2;


  printf("Enter First Number:");
  scanf("%f", &number_1);

  printf("Enter Second Number:");
  scanf("%f", &number_2);


  float *p1 = &number_1;
  float *p2 = &number_2;

  Interface( p1,  p2);

  printf("\n\tResult: %0.2f", *p1);

}

void Interface(float *number1, float *number2)
{
   char op;
   printf("Enter The Operand:");
   op = getche();

   BusinessLogic(number1, number2, op);
}

void BusinessLogic(float *number1, float *number2, char ch)
{
	switch(ch)
	{
	case '+':
	  *number1 += *number2;
	  break;
	case '*':
		  *number1 *= *number2;
		  break;
	case '-':
		  *number1 -= *number2;
		  break;
	case '/':
		  *number1 /= *number2;
		  break;

	default:
		break;
	}
}

