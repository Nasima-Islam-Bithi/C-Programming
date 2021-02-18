// A program to find the sum of N^2 numbers
//1^2 + 2^2 + ........... +n^2
// sum=n(n+1)(2n+1)/6
#include<stdio.h>

//method 1
int sum(int n)
{
    int s=0;
    for(int i=1;i<=n;i++)
    {
        s=s+(i*i);
    }
    return s;
}
//method 2
int sum1(int n)
{
    return (n*(n+1)*(2*n +1))/6;
}
int main()
{
    int n;
    printf("Enter a number:\n");
    scanf("%d",&n);
    printf("Sum = %d\n",sum(n));
    printf("Sum = %d\n",sum1(n));

}

