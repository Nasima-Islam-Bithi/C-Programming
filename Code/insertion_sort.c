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
    for(i=1;i<n;i++)
    {
        j=i;
        while(j>0 && a[j-1]>a[j])
        {
            temp=a[j];
            a[j]=a[j-1];
            a[j-1]=temp;
  j--;
        }

    }
     printf("\nAfter sorting the elements :\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}
