// A program to find the minimum value of array

#include<stdio.h>
int main()
{
    int a[100],i,n,min;
    printf("Total number of elements:\n");
    scanf("%d",&n);

    printf("Enter elements:\n");

    for(i=0;i<n;i++)
    {
    scanf("%d",&a[i]);
    }
    min=a[0];
    for(i=0;i<n;i++)
    {
    if(min>a[i])
    {
        min=a[i];
    }
    }
    printf("Minimum value is %d\n",min);

}
