
/*A program to convert a hexadecimal to decimal number
  Example: 1A = (16^1 *  1)   +   (16^0  *   10)
              = 16            + 10
              = 26
*/

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

int hex_to_dec(char n[])
{

    int l,i,j=0,s=0,r;
    l=strlen(n);
    i=l-1;
    j=0;
    while(i>=0) {
        if(n[i]>='0' && n[i]<='9')
        {
            r=n[i]-'0';
        }
        else if (n[i]>='A' && n[i]<='F')
        {
            r=n[i]-'A'+10;
        }
        else if (n[i]>='a' && n[i]<='f')
        {
            r=n[i]-'a'+10;
        }

        s=s+r*power(16,j);
        i--;
        j++;
    }
    return s;

}


int main()
{
    char n[10];
    printf("Enter a hexadecimal number:\n");
    scanf("%s",n);
    printf("The decimal number:\n");
    printf("%d",hex_to_dec(n));

}

