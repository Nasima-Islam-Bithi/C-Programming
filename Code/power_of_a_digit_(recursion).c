// Calculate a^n using recursion function in C
#include<stdio.h>

int power(int a, int n)
{
    if(n==1)
        return ;
    else
        return a*power(a,n-1);
}



int main()
{
    int a,n;
    printf("Enter inputs a and n : ");
    scanf("%d%d",&a,&n);
    int val= power(a,n);
    printf("%d ",val);


}
