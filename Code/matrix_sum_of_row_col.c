
/* C program to calculate sum of rows and columns of matrix.
        Enter the number of row and column of matrix
        3 3
        Enter 3X3 matrix element :
        1 2 3
        4 5 6
        7 8 9
        Sum of row1 is 6
        Sum of row2 is 15
        Sum of row3 is 24
        Sum of column1 is 12
        Sum of column2 is 15
        Sum of column3 is 18

*/
#include<stdio.h>
#define size 10
int main()
{
    int a[size][size],i,j,n,sum=0,r,c;
    printf("Enter the number of row and column of matrix\n");
    scanf("%d%d",&r,&c);
    printf("Enter %dX%d matrix element :\n",r,c);
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);

        }
    }
for(i=0;i<r;i++)
    {
        sum=0;
        for(j=0;j<c;j++)
        {
         sum+=a[i][j];

        }
        printf("Sum of row%d is %d\n",i+1,sum);
    }
for(i=0;i<r;i++)
    {
        sum=0;
        for(j=0;j<c;j++)
        {
         sum+=a[j][i];

        }
        printf("Sum of column%d is %d\n",i+1,sum);
    }

}


