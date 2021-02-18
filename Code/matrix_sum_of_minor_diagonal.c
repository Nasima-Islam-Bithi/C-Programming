/* C program to find the sum of minor diagonal element of matrix.

        Enter the size of matrix
        3
        Enter 3X3 matrix element :
        1 2 3
        4 5 6
        9 3 4
        Sum of minor diagonal elements: 17

*/
#include<stdio.h>
#define size 10
int main()
{
    int a[size][size],i,j,n,sum=0;
    printf("Enter the size of matrix\n");
    scanf("%d",&n);
    printf("Enter %dX%d matrix element :\n",n,n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
            if(i+j==n-1)
            {
                sum+=a[i][j];
            }
        }
    }

   printf("Sum of minor diagonal elements: %d\n",sum);
}


