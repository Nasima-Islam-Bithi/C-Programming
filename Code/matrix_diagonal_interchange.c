/* C program to interchange diagonals of a matrix.

        Enter the number of row and column of matrix
        3 3
        Enter matrix element :
        1 2 3
        4 5 6
        7 8 9
        After interchanging diagonal element
        3 2 1
        4 5 6
        9 8 7
*/
#include<stdio.h>
#define size 10
int main()
{
    int a[size][size],i,j,r1,c1,sum=0,temp;
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


    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {

            if(i==j)
            {
                temp=a[i][j];
                a[i][j]=a[i][c1-1-i];
                a[i][c1-1-i]=temp;

            }
        }
    }
    printf("After interchanging diagonal element\n");
        for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            printf("%d ",a[i][j]);
        }
    printf("\n");
    }


}



