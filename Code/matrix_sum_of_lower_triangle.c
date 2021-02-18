
/* C program to find sum of lower triangular matrix
        Enter the number of row and column of matrix
        3 3
        Enter lower triangular matrix element :
        1 0 0
        4 5 0
        7 8 9
        The sum of lower triangular matrix element is 19

*/
#include<stdio.h>
#define size 10
int main()
{
    int a[size][size],i,j,r1,c1,sum=0;
    printf("Enter the number of row and column of matrix\n");
    scanf("%d%d",&r1,&c1);
    printf("Enter lower triangular matrix element :\n");
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
            if(i>j)
            {
                sum+=a[i][j];

            }
        }
    }

         printf("The sum of lower triangular matrix element is %d\n",sum);


}




