// A program to find the maximum value of array

#include<stdio.h>
int main()
{
    int a[100],i,n,max;
    printf("Total number of elements:\n");
    scanf("%d",&n);

    printf("Enter elements:\n");

    for(i=0;i<n;i++)
    {
    scanf("%d",&a[i]);
    }
    max=a[0];
    for(i=0;i<n;i++)
    {
    if(max<a[i])
    {
        max=a[i];
    }
    }
    printf("Max is %d\n",max);

}
