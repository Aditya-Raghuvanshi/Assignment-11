//Write a function to calculate HCF of two numbers. (TSRS)
#include<stdio.h>

int hcf(int, int);
int main()
{
    int a,b;
    printf("enter two numbers ");
    scanf("%d%d",&a,&b);
    printf("HCF of given no. is %d",hcf(a,b));
    return 0;
}
int hcf(int a,int b)
{
    int H,i;
    H=a<b?a:b;
    for(i=H;i>=2;i--)
    {
        if(a%i==0&&b%i==0)
        {
            return(i);
        }
    }
}
