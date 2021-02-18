
#include<stdio.h>
#define size 3
int main()
{
    int a[size][size],b[size][size],i,j;
    printf("Enter first matrix:\n");
    for(i=0;i<size;i++)
    {
        for(j=0;j<size;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
 printf("Enter second matrix:\n");
    for(i=0;i<size;i++)
    {
        for(j=0;j<size;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    for(i=0;i<size;i++)
    {
        for(j=0;j<size;j++)
        {
            a[i][j]+= b[i][j];
        }
    }
    printf("print after addition\n");
    for(i=0;i<size;i++)
    {
        for(j=0;j<size;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
}
