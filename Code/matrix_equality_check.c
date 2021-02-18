/* C program to check whether two matrices are equal or not
        Enter the number of row and column of first matrix
        3 2
        Enter first matrix:
        1 2
        2 3
        4 5

        Enter the number of row and column of second matrix
        3 2
        Enter second matrix:
        1 2
        2 3
        4 5
        Two matrix are equal

*/
#include<stdio.h>
#define size 10
int main()
{
    int a[size][size],b[size][size],i,j,flag=0,r1,r2,c1,c2;
    printf("Enter the number of row and column of first matrix\n");
    scanf("%d%d",&r1,&c1);
    printf("Enter first matrix:\n");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("\nEnter the number of row and column of second matrix\n");
    scanf("%d%d",&r2,&c2);
 printf("Enter second matrix:\n");
    for(i=0;i<r2;i++)
    {
        for(j=0;j<c2;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }

    if(r1==r2 && c1==c2)
    {

    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
          if(a[i][j]!=b[i][j])
          {
              flag=1;
              break;
          }
        }
    }
    if(flag)
    {
        printf("Two matrix are not equal\n");
    }
    else
    {
         printf("Two matrix are equal\n");
    }
    }
    else
    {
         printf("Two matrix are not equal\n");
    }

}

