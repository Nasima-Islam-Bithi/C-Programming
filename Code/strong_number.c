
/* A program to check strong number
Input  : n = 145
Output : Yes
Sum of digit factorials = 1! + 4! + 5!
                        = 1 + 24 + 120
                        = 145

*/
#include<stdio.h>

void strong_long();
int fact(int n)//find factorial
{
    if(n<=0)
    {
        return 1;
    }
    else
    {
        return n*fact(n-1);
    }
}

int main()
{
    int n,s=0,num,r;
    // Method 1
    printf("Enter a number:\n");
    scanf("%d",&n);
    num=n;
    while(n!=0)
    {
        r=n%10;        // split digit
        s=s+fact(r);  //sum of factorial of each digit
        n/=10;
    }
    if(s==num)  //compare sum with original input value
    {
        printf("%d is a strong number\n",num);
    }
    else
    {
        printf("%d is not a strong number\n",num);
    }

    strong_long();

}
// Method 2
void strong_long()
{
    char n[100],t[100],num[100];// for long long strong number
    int s=0,i,l,j,flag=0;
    printf("Enter a number:\n");
    scanf("%s",n);
    l=strlen(n); // number of digit
    i=0;
    j=0;
    while(i<l)
    {
        s=s+fact(n[i]-48); //sum of factorial of each digit
        i++;

    }

    while(s!=0)  //check each digit of sum with original input value
    {
        char ch = (s%10)+'0';
        s/=10;
        printf("%c ",ch);
        if(ch!=n[l-j-1])
        {
            flag=1;
            break;
        }
        j++;


    }
    if(flag)
    {
        printf("%s is not a strong number\n",n);
    }
    else
    {
        printf("%s is a strong number\n",n);
    }

//printf("%s",t);
}
