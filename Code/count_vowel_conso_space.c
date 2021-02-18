/* A program to count number of vowel ,consonant and space of a given sentence.
Enter a sentence:
I am Bithi
Space=2    vowel=4    consonant=4
*/
#include<stdio.h>
int main()
{
    char s[100];
    int n,i,space=0,vowel=0,conso=0;
    printf("Enter a sentence:\n");
    gets(s);
    n=strlen(s);

    //Lower case conversion
    for(i=0; i<n; i++)
    {
        if(s[i]==' ')
        {
            space++;
        }
        else if(s[i]>='A'&& s[i]<='Z'||s[i]>='a'&& s[i]<='z' )
        {
            if(s[i]=='A'||s[i]=='a'||s[i]=='E'||s[i]=='e'||s[i]=='I'||s[i]=='i'||s[i]=='O'||s[i]=='o'||s[i]=='U'||s[i]=='u')
            {
                vowel++;
            }
            else
            {
                conso++;
            }
        }
    }

    printf("Space=%d    vowel=%d    consonant=%d\n",space,vowel,conso);
}



