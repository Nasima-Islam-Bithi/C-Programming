
/* C program to check sparse matrix

        Enter the number of row and column of matrix
        3 3
        Enter matrix element :
        1 0 0
        4 5 0
        0 0 0
        It is a sparse matrix
*/
#include<stdio.h>
#define size 10
int main()
{
    int a[size][size],i,j,r1,c1,c=0;
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

            if(a[i][j]==0)
            {
                c++;
            }

        }
    }
    if(c>=(r1*c1)/2)
    {
        printf("It is a sparse matrix\n");
    }
    else
    {
         printf("It is not a sparse matrix\n");
    }




}






