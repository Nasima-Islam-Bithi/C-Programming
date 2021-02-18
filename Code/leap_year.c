//A program to check leap year

#include<stdio.h>
void leap_year(int);
int main()
{
    int year;
    printf("Enter a number:");
    scanf("%d",&year);
    leap_year(year);

}


void leap_year(int year)
{
    if(year%400==0|| year%4==0 && year%100!=0)
    {
        printf("%d is a leap year.\n",year);
    }
    else
    {
        printf("%d is not leap year.\n",year);
    }
}
