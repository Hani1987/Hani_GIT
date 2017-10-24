#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>

void GUI();
void interface(double number);
void BusinessLogic(double number);


int main()
{
	GUI();

    return 0;
}

void GUI()
{
  double num = -1;

  interface(&num);

  printf("Result: %F", num);

}

void interface(double number)
{
	BusinessLogic(number);
}

void BusinessLogic(double number)
{
   number = 43.35;
}

