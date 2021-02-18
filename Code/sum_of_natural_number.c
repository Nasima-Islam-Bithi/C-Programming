// A program to find the sum of Natural numbers
//1+2+3+..........+n
// sum= n(n-1)/2

#include<stdio.h>

//method 1
int sum(int n)
{
    int s=0;
    for(int i=1;i<=n;i++)
    {
        s=s+i;
    }
    return s;
}
//method 2
int sum1(int n)
{
    return (n*(n+1))/2;
}
int main()
{
    int n;
    printf("Enter a number:\n");
    scanf("%d",&n);
    printf("Sum = %d\n",sum(n));
    printf("Sum = %d\n",sum1(n));

}
