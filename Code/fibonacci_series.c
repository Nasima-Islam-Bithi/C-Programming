
//A program to find fibonacci series
//Example:  0 1 1 2 3 5 8 13 21 etc

#include<stdio.h>
void fibo1(int);
void fibo2(int);
int fibo3(int);


int main()
{

    int n,i;
    printf("Enter a number:");
    scanf("%d",&n);
    //fibo1(n);
    //fibo2(n);
    for(i=0;i<n;i++)
    {
        printf("%d ",fibo3(i));
    }
}
//Method 1: using array
void fibo1(int n)
{
    int i,c=0,a[100];
    a[0]=0;
    a[1]=1;
    for(i=2;i<n;i++)
    {
       a[i]=a[i-1]+a[i-2];
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}
//Method 2: while loop
void fibo2(int n)
{
    int i,c=0,a=0,b=1;
    printf("%d %d ",a,b);
    i=3;
    while(i<=n)
    {
      c=a+b;
      printf("%d ",c);
      a=b;
      b=c;
      i++;
    }

}
//Method 3: using recursion
int fibo3(int n)
{
    int i;
    if(n==0)
        return 0;
    else if(n==1)
        return 1;
    else
        return fibo3(n-1)+fibo3(n-2);
}


