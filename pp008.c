//Write a program to input few numbers from command line and print all even numbers from given set of numbers.
#include<stdio.h>
void main(int argc, int*argv[])
{
    int i;
    for(i=1;i<=argc;i++)
    {
        if(argv[i]%2){}
        else{printf("%d",argv[i]);}
    }
}
