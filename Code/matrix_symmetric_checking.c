
/* C program to check symmetric matrix

        Enter the number of row and column of matrix
        3 3
        Enter matrix element :
        1 2 3
        2 4 5
        3 5 8
        The matrix is a symmetric matrix
*/
#include<stdio.h>
#define size 10
int main()
{
    int a[size][size],i,j,r1,c1,flag=0;
    printf("Enter the number of row and column of matrix\n");
    scanf("%d%d",&r1,&c1);
    printf("Enter matrix element :\n");
    for(i=0; i<r1; i++)
    {
        for(j=0; j<c1; j++)
        {
            scanf("%d",&a[i][j]);

        }
    }


    for(i=0; i<r1; i++)
    {
        for(j=0; j<c1; j++)
        {
            printf("%d %d\n",a[i][j],a[j][i]);
            if(a[i][j]!=a[j][i])
            {
                flag=1;
                break;
            }

        }
    }
    if(flag)
    {
        printf("The matrix is not a symmetric matrix\n");
    }
    else
    {
        printf("The matrix is a symmetric matrix\n");
    }




}





