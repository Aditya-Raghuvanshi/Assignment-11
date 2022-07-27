//Write a function to print PASCAL Triangle. (TSRN)
#include<stdio.h>

int fact(int );
int comb(int , int );
void pascal(int );
int main()
{
    int n;
    printf("enter no. of rows you want for pascals triangle  ");
    scanf("%d",&n);
    pascal(n);
    return 0;

}

void pascal(int n)
 {
     int i,j;
    for(i=1;i<=n;i++)
    {
        int k=1,r=0;
        for(j=1;j<=(2*n)-1;j++)
        {
            if(j>=n+1-i&&j<=n-1+i&&k)
            {
                    printf("%d",comb(i-1,r));
                    r++;
                    k=0;
            }
            else
             {
                printf(" ");
                k=1;
             }
        }
        printf("\n");
    }

 }
 int comb(int n, int r)
 {
     return(fact(n)/(fact(n-r)*fact(r)));
 }
 int fact(int x)
 {
     int i,s=1;
     for(i=x;i>=1;i--)
     {
        s=s*i;
     }
     return(s);
 }







