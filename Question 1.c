//Write a function to calculate LCM of two numbers. (TSRS)
#include<stdio.h>

int LCM(int, int );
int main()
{
    int a,b;
    printf("enter two numbers ");
    scanf("%d%d",&a,&b);
    printf("LCM of given no. is %d",LCM(a,b));
    return 0;
}
int LCM(int a,int b)
{
    int L,i;
    L=a>b?a:b;
    for(i=L;i<=a*b;i++)
    {
        if(i%a==0&&i%b==0)
        {
            return(i);
        }
    }
}
