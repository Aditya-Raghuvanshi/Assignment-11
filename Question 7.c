//Write a function to print first N terms of Fibonacci series (TSRN)
#include<stdio.h>

void fib(int );
int main()
{
    int n;
    printf("enter any numbers ");
    scanf("%d",&n);
    fib(n);
    return 0;
}
void fib(int n)
{
    int x,y,z,i;
    x=0; y=1;
    printf("%d ",x);
    printf("%d ",y);
    for(i=1;i<=n-2;i++)
    {
        z=x+y;
        printf("%d ",z);
        x=y;
        y=z;
    }
}
