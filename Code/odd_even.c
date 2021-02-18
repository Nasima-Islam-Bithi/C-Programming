//A program to check ODD-EVEN number

void even_print(int a)
{
    printf("%d is even\n",a);
}

void odd_print(int a)
{
    printf("%d is odd\n",a);
}
#include<stdio.h>
int main()
{
    int a;
    printf("Enter a number:");
    scanf("%d",&a);

    // conditional or ternary operator
    (a%2==0)?even_print(a):odd_print(a);
    //if else method 1
    if(a%2==0)
    {
       even_print(a);
    }
    else
    {
        odd_print(a);
    }


    // if else method 2
    if((a/2)*2==a)
    {
        even_print(a);
    }
    else
    {
        odd_print(a);
    }
    // if else method 3
    //bit wise operation
    if(a&1==1)
    {
        odd_print(a);
    }
    else
    {
        even_print(a);
    }
}
