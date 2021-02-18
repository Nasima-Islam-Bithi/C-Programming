/* A program to convert octal number(using 0-7) into binary number

input:  25
        2=> 010       5=> 101
        So The binary number is 010101
*/

#include<stdio.h>
int main()
{
    char oct[100],bin[100]="";
    printf("Enter a octal number:\n");
    scanf("%s",oct);
    int l,i;
    l=strlen(oct);
    for(i=0; i<l; i++)
    {
        if(oct[i]=='0')
        {
            strcat(bin,"000");
        }
        else if(oct[i]=='1')
        {
            strcat(bin,"001");
        }
        else if(oct[i]=='2')
        {
            strcat(bin,"010");
        }
        else if(oct[i]=='3')
        {
            strcat(bin,"011");
        }
        else if(oct[i]=='4')
        {
            strcat(bin,"100");
        }
        else if(oct[i]=='5')
        {
            strcat(bin,"101");
        }
        else if(oct[i]=='6')
        {
            strcat(bin,"110");
        }
        else if(oct[i]=='7')
        {
            strcat(bin,"111");
        }

    }
    printf("The binary number is ");
    puts(bin);


}
