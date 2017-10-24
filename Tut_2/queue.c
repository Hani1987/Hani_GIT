#include<stdio.h>
#include<stdlib.h>


int main()
{

 int q[5] = {1,9,4,31,21};

 int *first = &q[0];
 int *last = &q[4];

 printf("First= %d \nLast: %d", *first, *last);

 *first = q[1];
 *last = 6;

 printf("\n\n\n\nFirst= %d \nLast: %d", *first, *last);

 return 0;
}


