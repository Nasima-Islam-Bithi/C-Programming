
/* C program to find transpose of a matrix

        Enter the number of row and column of matrix
        3 2
        Enter matrix element :
        1 2
        3 4
        5 6
        Transpose matrix:
        1       3       5
        2       4       6
*/
#include<stdio.h>
#define size 10
int main()
{
    int a[size][size],b[size][size],i,j,r1,c1,sum=0;
    printf("Enter the number of row and column of matrix\n");
    scanf("%d%d",&r1,&c1);
    printf("Enter matrix element :\n");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            scanf("%d",&a[i][j]);

        }
    }
    printf("Transpose matrix:\n");

     for(i=0;i<c1;i++)
    {
        for(j=0;j<r1;j++)
        {
            b[i][j]=a[j][i];
            printf("%d\t",b[i][j]);
        }
        printf("\n");
    }




}




