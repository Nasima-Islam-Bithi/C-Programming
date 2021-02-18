// A program to find combination(nCr) and permutation(nPr)
//nCr= n! / r!(n-r)!
//nPr= n! / (n-r)!
#include<stdio.h>
int fact(int n)
{
    if(n<=0)
        return 1;
    else
        return n*fact(n-1);
}
int main()

{
    int n,r,nCr,nPr;
    printf("Enter two numbers:\n");
    scanf("%d%d",&n,&r);                     //input
    nCr= fact(n)/(fact(r)*fact(n-r));        //combination
    nPr= fact(n)/fact(n-r);                  //permutation
    printf("%dC%d = %d and %dP%d= %d\n",n,r,nCr,n,r,nPr);

}
