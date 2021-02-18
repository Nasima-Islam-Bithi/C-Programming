// A program to find factorial of a number

#include<stdio.h>
void factorial(int);
int rec_factorial(int);
int main()
{

    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    factorial(n);
    int rec=rec_factorial(n);
    printf("Factorial is %d",rec);

}

//Method 1: using for loop
void factorial(int n)
{
    int i,prod=1;
    for(i=1;i<=n;i++)
    {
        prod*=i;
    }
    printf("Factorial is %d\n",prod);
}


//Method 2: using recursion
int rec_factorial(int n)
{
    if(n<=0)
    {
        return 1;
    }
    else
    {
        return n*rec_factorial(n-1);
    }
}
