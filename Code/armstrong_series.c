/*
A program to find armstrong series.
Example: 1, 2, 3, 4, 5, 6, 7, 8, 9, 153, 370, 371, 407, 1634 etc

*/

#include<stdio.h>
int power(int a, int b)
{
    int prod=1,i;
    for(i=1;i<=b;i++)
    {
        prod*=a;
    }
    return prod;
}

int main()
{
    int n,i,d,j=0,f=0,temp,sum;
    printf("Enter the range:\n");
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        d=log10(i)+1;
        temp=i;
        sum=0;

    while(temp!=0)
    {
        sum=sum+ power(temp%10,d);
        temp/=10;
    }
   if(sum==i)
   {
       printf("%d\n",i);
       f++;
   }

    }
printf("\nTotal number: %d ",f);


}



