#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>

void f1();
void locate(char name[]);

int main()
{

	f1();

    return 0;
}

void f1()
{
  char esm[10] = "HANIJORFI";

  locate(&esm[0]);

  printf("Salam 32: %c %c", esm[1], esm[2]);

}

void locate(char name[])
{
	name[1] ='Q';
	name[2] ='Ü';
}


