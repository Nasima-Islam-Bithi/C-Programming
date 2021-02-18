// A program to reverse an array
#include<stdio.h>

int main()
{

int a[100],i,n;
    printf("Total number of elements of first array:\n");
    scanf("%d",&n);

    printf("Enter elements:\n");

    for(i=0;i<n;i++)
    {
    scanf("%d",&a[i]);
    }
    for(i=n-1;i>=0;i--)
    {
        printf("%d ",a[i]);
    }

}
