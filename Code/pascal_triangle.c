/* Pattern matching
    1
   1 1
  1 2 1
 1 3 3 1

 */
#include<stdio.h>

int fact(int n)
{
    if(n<=0)
    {
        return 1;
    }
    else
    {
        return n*fact(n-1);
    }
}

int main()
{

    int i,n,j,s,iCj;
    printf("Total number of rows:\n");
    scanf("%d",&n);


    for(i=0; i<n; i++)
    {

        for(s=1; s<=n-i; s++)
        {
            printf(" ");
        }

        for(j=0; j<=i; j++)
        {

            iCj=fact(i)/(fact(j)*fact(i-j));
            printf("%d ",iCj);

            }
 printf("\n");
        }




}
