/*
A program to find prime series.
Example: 2 3 5 7 11 13 17 19 23 29 31 37 41 43 47 53 59 61 67 71 73 79 83 89 97 etc
*/

#include<stdio.h>
int main()
{
    int n,i,c=0,j=0,k=0,f=0;
    printf("Enter the range:\n");
    scanf("%d",&n);
    for(i=2; i<=n; i++)
    {
        c=0;
        for(j=2; j<=sqrt(i); j++)
        {
            if(i%j==0)
            {
                c++;
                break;

            }
        }
        if(c==0)
        {
            printf("%d ",i);
            f++;
        }

    }
printf("\nTotal number: %d ",f);


}


