/*Write a program in C to find the sum of the series 1! /1+2!/2+3!/3+4!/4+5!/5 using the
function.*/
#include<stdio.h>

int main()
{
    int i,s=0;
    for(i=1;i<=5;i++)
    {
       s=s+(fact(i)/i);
    }
    printf("sum of the given series is %d",s);
    return 0;
}
int fact(int n)
{
    int i,f=1;
    for(i=n;i>=1;i--)
    {
        f=f*i;
    }
    return(f);
}
