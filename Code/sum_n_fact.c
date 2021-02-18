//A program of summation
// 1/1! + 2/2! +...........+ n/n!


#include<stdio.h>


// factorial
int fact(int n)
{
    if(n<=0)
        return 1;
    else
        return n*fact(n-1);
}
// sum calculation
float sum(int n)
{
    float s=0.0;
    for(int i=1;i<=n;i++)
    {
        s=s+(float)(i)/(float)fact(i);
    }
    return s;
}

int main()
{
    int n;
    printf("Enter a number:\n");
    scanf("%d",&n);
    printf("Sum = %.3f\n",sum(n));


}


