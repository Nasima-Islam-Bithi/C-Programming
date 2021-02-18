
//A program to check prime number
//Example:  2, 3, 5, 7, 11 etc

#include<stdio.h>
void prime(int);

int main()
{

    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    prime(n);

}

void prime(int n)
{
    int i,c=0;
    for(i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
         c++;
         break;

        }
    }
    if(c)
    {
        printf("%d is not a Prime number",n);
    }
    else
    {
      printf("%d is a Prime number",n);
    }

}
