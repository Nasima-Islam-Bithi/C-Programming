// Calculate the sum of series : 1+ (1+2) + (1+2+3) + ...... + (1+2+....+n)

#include<stdio.h>

int main()
{
    int sum,s,i,j,n;
    scanf("%d",&n);
    sum=0;
    for(i=1;i<=n;i++)
    {
        s=0;
        for(j=1;j<=i;j++)
        {
            s+= j;

        }
        sum+=s;
    }
    printf("%d",sum);
}


