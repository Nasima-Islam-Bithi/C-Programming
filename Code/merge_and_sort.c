
// A program to merge two array and sort them
#include<stdio.h>

int main()
{
    int a[100],b[100],c[100],i,j,n,m;
    printf("Total number of elements of first array:\n");
    scanf("%d",&n);

    printf("Enter elements:\n");

    for(i=0;i<n;i++)
    {
    scanf("%d",&a[i]);
    }
    printf("Total number of elements of second array:\n");
    scanf("%d",&m);

    printf("Enter elements:\n");

    for(i=0;i<m;i++)
    {
    scanf("%d",&b[i]);
    }
    j=0;
    for(i=0;i<n;i++)
    {
        c[j++]=a[i];

    }
    for(i=0;i<m;i++)
    {
        c[j++]=b[i];

    }
 for(i=0;i<n+m;i++)
    {
    printf("%d ",c[i]);
    }

int temp;
for(i=0;i<n+m;i++)
{
    for(j=0;j<m+n-1-i;j++)
    {
        if(c[j]>c[j+1])
        {
            temp=c[j];
            c[j]=c[j+1];
            c[j+1]=temp;
        }
    }
}
printf("\nAfter swap\n");
for(i=0;i<n+m;i++)
    {
    printf("%d ",c[i]);
    }

}

