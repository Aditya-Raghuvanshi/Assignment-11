//Write a function to print first N prime numbers (TSRN)
#include<stdio.h>

void print_prime(int );
int main()
{
    int n;
    printf("enter a number ");
    scanf("%d",&n);
    print_prime(n);
    return 0;
}
void print_prime(int n)
{
    int i,j,count=0;
    for(j=2;;j++)
    {
        for(i=2;i<j;i++)
      {
        if(j%i==0)
        {
            break;
        }
      }
      if(i==j)
      {
          printf("%d ",j);
          count++;
          if(count==n)
            break;
      }
    }
}
