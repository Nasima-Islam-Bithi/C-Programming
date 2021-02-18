/*
   A program to count the digit of a number.
   Example: 4567 has 4 digit.

*/
#include<stdio.h>
#include<math.h>
void armstrong();
int power(int , int );
int main()
{

    int num,d,count=0;
    printf("Enter a number:");
    scanf("%d",&num);
    int temp,sum=0;
    temp=num;
    //d= (num==0)?1:log10(num)+1; //conditional operator
    d=log10(temp)+1; // number of digit using log10
    printf("%d has %d digit.\n",num,d);

    while(temp!=0)   // using while loop
    {
    count++;
    temp/=10;
    }
    printf("%d has %d digit.\n",num,count);
    char str[100];
    printf("Enter a number:");
    scanf("%s",str);
    d=strlen(str);     //using strlen()
    printf("%s has %d digit.\n",str,d);




}


void armstrong()
{

}



