//Write a function to find the next prime number of a given number. (TSRS)
#include<stdio.h>

int next_prime(int );
int main()
{
    int a;
    printf("enter a numbers ");
    scanf("%d",&a);
    printf("next prime no. is %d ",next_prime(a));
    return 0;
}
int next_prime(int x)
{
    int i,j;
    for(j=x+1;;j++)
    {
        for(i=2;i<j;i++)
      {
        if(j%i==0)
        {
            break;
        }
      }
      if(i==j)
        return(j);
    }
}
