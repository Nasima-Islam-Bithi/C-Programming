
/* C program to find determinant of a matrix

        Enter 3x3 matrix element :
        6 1 1
        4 -2 5
        2 8 7
        Determinant of the 3x3 matrix = -306
*/
#include<stdio.h>
#define size 10
int main()
{
    int a[size][size],i,j,det=0;

    printf("Enter 3x3 matrix element :\n");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            scanf("%d",&a[i][j]);

        }
    }

    det= a[0][0]*((a[1][1]*a[2][2])-(a[1][2]*a[2][1]))-a[0][1]*((a[1][0]*a[2][2])-(a[1][2]*a[2][0]))+a[0][2]*((a[1][0]*a[2][1])-(a[1][1]*a[2][0]));
    printf("Determinant of the 3x3 matrix = %d\n",det);


}







