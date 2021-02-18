// Calculate the largest, smallest and average value of a series
#include<stdio.h>
#include<limits.h>

int main()
{
    int a,i,s=0,max,min,n=5;

    printf("Enter the three values: \n");
max=0;
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a);
        if(a>=max)
        {
            max=a;
        }
        else if(a<=min)
        {
            min=a;
        }
        s=s+a;
    }


   printf("Largest= %d  Smallest = %d  Average = %.2f",max,min, (float)s/(float)n);


    }
