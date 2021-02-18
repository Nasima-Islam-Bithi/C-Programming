/*
   A program to check armstrong number.
   Example: 1, 2, 3, 4, 5, 6, 7, 8, 9, 153, 370, 371, 407, 1634 etc
                1634 = 1^4 + 6^4 + 3^4 + 4^4 = 1634
*/
#include<stdio.h>
#include<math.h>
void armstrong();
int power(int , int );
int main()
{
armstrong();
}


void armstrong()
{
    int num,d;
    printf("Enter a number:");
    scanf("%d",&num);
    int temp,sum=0;
    temp=num;
    d=log10(temp)+1;

    while(temp!=0)
    {
        sum=sum+ power(temp%10,d);
        temp/=10;
    }
   if(sum==num)
   {
       printf("%d is an armstrong number.\n",num);
   }
   else
   {
       printf("%d is not an armstrong number.\n",num);
   }
}

int power(int a, int b)
{
    int prod=1,i;
    for(i=1;i<=b;i++)
    {
        prod*=a;
    }
    return prod;
}
