
// A program to sort an array

#include<stdio.h>
int main()
{
    int a[100],i,j,temp,n;
    printf("Enter the number of element:\n");
    scanf("%d",&n);
    printf("Enter the elements :\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[j];
                a[j]=a[i];
                a[i]=temp;
            }
        }
    }
     printf("\nAfter sorting the elements :\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}
