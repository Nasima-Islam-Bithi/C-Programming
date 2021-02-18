// A program to delete an element from an array
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

    printf("\nEnter the position to delete:\n");
    scanf("%d",&pos);


    for(i=pos-1;i<n;i++)
    {
        a[i]=a[i+1];
    }
    printf("\nAfter deletion:\n");

    for(i=0;i<n-1;i++)
    {
    printf("%d ",a[i]);
    }



}


