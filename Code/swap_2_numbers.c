// A program to swap two numbers

#include<stdio.h>

void swap1(int,int);
void swap2(int,int);
void swap3(int,int);
void swap4(int,int);
void swap5(int*,int*);
int main()
{
    int a,b;
    printf("Enter two numbers:\n");
    scanf("%d%d",&a,&b);
    swap1(a,b);
    swap2(a,b);
    swap3(a,b);
    swap4(a,b);


}
//using third variable
void swap1(int a, int b)
{
    int t;
    t=a;
    a=b;
    b=t;
    printf("After swap: %d %d\n",a,b);
}
//without third variable (add-sub)
void swap2(int a, int b)
{
    a=a+b;
    b=a-b;
    a=a-b;
    printf("After swap: %d %d\n",a,b);
}

//without third variable (mul-div)
void swap3(int a, int b)
{
    a=a*b;
    b=a/b;
    a=a/b;
    printf("After swap: %d %d\n",a,b);
}

//without third variable (XOR)
void swap4(int a, int b)
{
    a=a^b;
    b=a^b;
    a=a^b;
    printf("After swap: %d %d\n",a,b);
}

//using pointer
void swap5(int *a, int *b)
{
    int t;
    t=*a;
    *a=*b;
    *b=t;
    printf("After swap: %d %d\n",*a,*b);
}
