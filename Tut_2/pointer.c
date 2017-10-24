#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>

int main()
{
	int val=9;
	int *p= &val;

	printf("Before change: %d\n\n", *p);

	printf("Enter New: ");
	scanf("%d", p);

	printf("\n\nAfter change: %d", *p);

 return 0;
}


