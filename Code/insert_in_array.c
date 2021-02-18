// A program to insert an element into an array
#include<stdio.h>

int main()
{

int a[100],i,n,val,pos;
    printf("Total number of elements of first array:\n");
    scanf("%d",&n);

    printf("Enter elements:\n");

    for(i=0;i<n;i++)
    {
    scanf("%d",&a[i]);
    }

    printf("\nEnter the position and value to insert:\n");
    scanf("%d%d",&pos,&val);


    for(i=n-1;i>=pos-1;i--)
    {
        a[i+1]=a[i];
    }
    a[pos-1]=val;
    for(i=0;i<n+1;i++)
    {
    printf("%d ",a[i]);
    }



}

