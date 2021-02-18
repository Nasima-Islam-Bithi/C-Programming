/*
A program to find even series and odd series and their summation

*/

#include<stdio.h>
int main()
{
    int n,i,j=0,k=0,even[100],odd[100],s1=0,s2=0;
   printf("Enter the range:\n");
   scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
         if(i%2==0)
         {
             even[j++]=i;
             s1=s1+i;
         }
         else
         {
             odd[k++]=i;
             s2=s2+i;
         }
    }
     printf("\nEven Series:\n");
    for(i=0;i<j;i++)
    {
        printf("%d ",even[i]);
    }
    printf("\n");
    printf("\nOdd Series:\n");
    for(i=0;i<k;i++)
    {
        printf("%d ",odd[i]);
    }

    printf("\n%d ",s1);
    printf("%d ",s2);


}

