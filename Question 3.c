//Write a function to check whether a given number is Prime or not. (TSRS)
#include<stdio.h>

int prime(int );
int main()
{
    int a;
    printf("enter a numbers ");
    scanf("%d",&a);
    if(prime(a))
        printf("the given no. is prime ");
    else
        printf("the given no. is not prime ");
    return 0;
}
int prime(int x)
{
    int i;

    for(i=2;i<x;i++)
    {
        if(x%i==0)
        {
            break;
        }
    }
    if(i==x)
        return(1);
    else
        return(0);
}
