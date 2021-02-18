#include<stdio.h>

int main()
{
    int a,b,gcd,t,lcm;
    printf("Enter two number:\n");
    scanf("%d%d",&a,&b);
    int x=a, y=b;

    while(a%b!=0)
    {
        t=a%b;
        a=b;
        b=t;
    }
    gcd=b;
    lcm=(x*y)/gcd;
    printf("GCD = %d\nLCM = %d\n",gcd,lcm);
}
