/* C program for scalar multiplication of matrix.

        Enter first matrix:
        1 2 3
        4 5 6
        7 8 9
        Input multiplier:
        2
        print scalar matrix multiplication
        2       4       6
        8       10      12
        14      16      18


*/
#include<stdio.h>
#define size 3
int main()
{
    int a[size][size],b[size][size],i,j,n;
    printf("Enter first matrix:\n");
    for(i=0;i<size;i++)
    {
        for(j=0;j<size;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Input multiplier:\n");
    scanf("%d",&n);

    for(i=0;i<size;i++)
    {
        for(j=0;j<size;j++)
        {
            a[i][j]*= 2;
        }
    }
    printf("print scalar matrix multiplication\n");
    for(i=0;i<size;i++)
    {
        for(j=0;j<size;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
}

