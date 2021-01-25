//Write a program to input a number and check it to be even or odd using bitwise operator.
#include<stdio.h>
void main()
{
   int n;
   scanf("%d",&n);
   if ( n & 1 == 1 )
      printf("Odd\n");
   else
      printf("Even\n");
   return 0;
}
