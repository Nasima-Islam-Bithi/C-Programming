// A program to count number of words in a sentence
#include<stdio.h>

int main()
{

int i,count=1;
char a[100];


    printf("Enter the sentence:\n");
    gets(a);


    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]==' '|| a[i]=='\n')
        {
            count++;
        }
    }
printf("Total word is %d\n",count);



}


