/* C program for subtraction of two matrix

        Enter first matrix:
        1 2 3
        4 5 6
        7 8 9
        Enter second matrix:
        9 8 7
        6 5 4
        3 2 1
        print after subtraction
        -8 -6 -4
        -2 0 2
        4 6 8

*/
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
            a[i][j]-= b[i][j];
        }
    }
    printf("print after subtraction\n");
    for(i=0;i<size;i++)
    {
        for(j=0;j<size;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
}
