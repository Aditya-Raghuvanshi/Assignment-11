//Write a program in C to find the square of any number using the function.
#include<stdio.h>

int square(int );
int main()
{
    int n;
    printf("enter any number ");
    scanf("%d",&n);
    printf("square of given number is %d",square(n));
    return 0;

}
int square(int n)
{
    return(n*n);
}
