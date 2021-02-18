/* Find a triangle of number in a given pattern
input: 4
   A
  ABA
 ABCBA
ABCDCBA

*/
#include<stdio.h>

int main()
{
    int n,i,j,k,s;
    printf("Enter a number:\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(s=0;s<n-i;s++)
            printf(" ");
        k=0;
        for(j=1;j<=2*i-1;j++)
        {
            if(i>=j)
            {
                k=j;
            }
            else if( i+1 == j)
            {
                k=j-2;
            }
            else
            {
                k=k-1;
            }


            printf("%c",k+64);
        }
        printf("\n");

    }
}

