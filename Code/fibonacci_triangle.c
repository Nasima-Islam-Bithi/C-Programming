/* Print fibonacci triangle
input: 4
1
1       1
1       1       2
1       1       2       3
*/
#include<stdio.h>


int fibo(int n)
{
    if(n==0 || n==1)
        return 1;
    else
        return fibo(n-1)+fibo(n-2);
}
int main()
{
    int n,i,j;
    printf("Enter a number:\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<=i;j++)
        {
            printf("%d\t", fibo(j));
        }
        printf("\n");

    }
}
