
//A program to convert a binary number to decimal number
//Example: 5 = 101
#include<stdio.h>
int power(int a,int b)
{
    int i,p=1;
    for(i=1;i<=b;i++)
    {
        p=p*a;
    }
    return p;
}
//Method 1
int bin(char n[])// using string
{

    int l,i,j=0,s=0;
    l=strlen(n);
    i=l-1;
    j=0;
    while(i>=0) {
        s=s+(n[i]-48)*power(2,j);
        i--;
        j++;
    }
    return s;

}

//Method 2
void bin1()
{
    int n, s=0,j=0;
   printf("\nEnter a binary number:\n");
   scanf("%d",&n);
    while(n!=0)
    {
        s=s+(n%10)*power(2,j);
        n=n/10;
        j++;
    }
    printf("The decimal number:\n");
    printf("%d\n",s);

}

int main()
{
    char n[10];
    printf("Enter a binary number:\n");
    scanf("%s",n);
    printf("The decimal number:\n");
    printf("%d",bin(n));
    bin1();
}
