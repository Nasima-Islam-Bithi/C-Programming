//A program to add two numbers by pointer

#include<stdio.h>
int add(int*, int*);
int main()
{
    int a,b;
    printf("Enter two numbers:");
    scanf("%d%d",&a,&b);
    int result=add(&a,&b);
    printf("ADD = %d\n",result);

}
//user defined function
int add(int *a, int *b)
{
    int c;
    c=*a+*b;
    return c;
}
