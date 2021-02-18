//A program to check palindrome

#include<stdio.h>
void palindrome_string();
void palindrome_number();
int main()
{

    palindrome_number();
    palindrome_string();
}
//string
void palindrome_string()
{
    char num[10];
    scanf("%s",num);
    puts(num);
    int n=strlen(num);
    int i,j,c=0;
    for(i=0;i<n/2;i++)
    {
        if(num[i]!=num[n-1-i])
        {
            c=1;
            break;
        }
    }
    if(c)
    {
        printf("%s is not a palindrome number.\n",num);
    }
    else
    {
        printf("%s is a palindrome number.\n",num);
    }

}
//number
void palindrome_number()
{
    int num;
    printf("Enter a number:");
    scanf("%d",&num);
    int temp,sum=0;
    temp=num;
    while(temp!=0)
    {
        sum=sum*10+(temp%10);
        temp/=10;
    }
   if(sum==num)
   {
       printf("%d is a palindrome number.\n",num);
   }
   else
   {
       printf("%d is not a palindrome number.\n",num);
   }
}
