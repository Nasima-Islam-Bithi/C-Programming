/* C program to find the sum of main diagonal element of matrix.

        Enter the number of row and column of matrix
        3 3
        Enter matrix element :
        1 2 3
        4 5 6
        7 8 9
        Sum of main diagonal elements: 15


*/
#include<stdio.h>
#define size 10
int main()
{
    int a[size][size],i,j,r1,c1,sum=0;
    printf("Enter the number of row and column of matrix\n");
    scanf("%d%d",&r1,&c1);
    printf("Enter matrix element :\n");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            scanf("%d",&a[i][j]);
            if(i==j)
            {
                sum+=a[i][j];
            }
        }
    }

   printf("Sum of main diagonal elements: %d\n",sum);
}


