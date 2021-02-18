#include<stdio.h>
int main()
{
    char hex[100],bin[100]="";
    printf("Enter a hexadecimal number:\n");
    scanf("%s",hex);
    int l,i;
    l=strlen(hex);
    for(i=0; i<l; i++)
    {
        if(hex[i]=='0')
        {
            strcat(bin,"0000");
        }
        else if(hex[i]=='1')
        {
            strcat(bin,"0001");
        }
        else if(hex[i]=='2')
        {
            strcat(bin,"0010");
        }
        else if(hex[i]=='3')
        {
            strcat(bin,"0011");
        }
        else if(hex[i]=='4')
        {
            strcat(bin,"0100");
        }
        else if(hex[i]=='5')
        {
            strcat(bin,"0101");
        }
        else if(hex[i]=='6')
        {
            strcat(bin,"0110");
        }
        else if(hex[i]=='7')
        {
            strcat(bin,"0111");
        }
        else if(hex[i]=='8')
        {
            strcat(bin,"1000");
        }
        else if(hex[i]=='9')
        {
            strcat(bin,"1001");
        }
        else if(hex[i]=='A'||hex[i]=='a')
        {
            strcat(bin,"1010");
        }
        else if(hex[i]=='B'||hex[i]=='b')
        {
            strcat(bin,"1011");
        }
        else if(hex[i]=='C'||hex[i]=='c')
        {
            strcat(bin,"1100");
        }
        else if(hex[i]=='D'||hex[i]=='d')
        {
            strcat(bin,"1101");
        }
        else if(hex[i]=='E'||hex[i]=='e')
        {
            strcat(bin,"1110");
        }

        else if(hex[i]=='F'||hex[i]=='f')
        {
            strcat(bin,"1111");
        }
    }
    printf("The binary number is ");
    puts(bin);


}
