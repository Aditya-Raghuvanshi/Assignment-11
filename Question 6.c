//Write a function to print all Prime numbers between two given numbers. (TSRN)
#include<stdio.h>

void btw_prime(int ,int );
int main()
{
    int a,b;
    printf("enter two numbers ");
    scanf("%d%d",&a,&b);
    btw_prime(a,b);
    return 0;
}
void btw_prime(int x,int y)
{
    int i,j;
    for(j=x+1;j<y;j++)
    {
        for(i=2;i<j;i++)
      {
        if(j%i==0)
        {
            break;
        }
      }
      if(i==j)
        printf("%d ",j);
    }
}
