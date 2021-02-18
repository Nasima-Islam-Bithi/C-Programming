
#include<stdio.h>
#define size 3
int main()
{
    int a[size][size],b[size][size],i,j,sum,c[size][size];
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
            c[i][j]=0;
            for(int k=0;k<size;k++)
            {
             c[i][j]+= a[i][k]*b[k][j];
            }
        }
    }
    printf("print after multiplication\n");
    for(i=0;i<size;i++)
    {
        for(j=0;j<size;j++)
        {
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }
}
