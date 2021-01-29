#include<stdio.h>
int is_even(int n);
int is_even(int n)
{
    if(n%2){return 0;}
    else{return 1;}
}
void main()
{
    int a,b;
    scanf("%d",&a);
    b=is_even(a);
    b?printf("even"):printf("odd");
}
