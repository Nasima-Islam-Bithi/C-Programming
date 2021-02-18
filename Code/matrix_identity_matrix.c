
/* C program to check Identity matrix
        Enter the number of row and column of matrix
        3 3
        Enter matrix element :
        1 0 0
        0 1 0
        0 0 1
        The matrix is an identity matrix
*/
#include<stdio.h>
#define size 10
int main()
{
    int a[size][size],b[size][size],i,j,r1,c1,flag=0;
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
            if((i==j && a[i][j]!=1 )||(i!=j && a[i][j]!=0) )
            {
                flag=1;
                break;
            }

        }
    }
    if(flag)
    {
        printf("The matrix is not an identity matrix\n");
    }
    else
    {
        printf("The matrix is an identity matrix\n");
    }




}





