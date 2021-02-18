//A program to convert a decimal number to binary number
//Example: 5 = 101

#include<stdio.h>

int main()
{
    int n,i=0,j,a[10];
   printf("Enter a decimal number:\n");
    scanf("%d",&n);
    while(n!=0)
    {
        a[i++]=n%2;
        n=n/2;
    }
    for(j=i-1;j>=0;j--)
    {
        printf("%d",a[j]);
    }

}

