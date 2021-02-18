

#include<stdio.h>

int main()
{
    int i,j;
    char a[26]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'},temp;

    for(i=0;i<26;i++)
    {
        for(j=i+1;j<26;j++)
        {
          if(a[i]<a[j])
          {
              temp=a[i];
              a[i]=a[j];
              a[j]=temp;
          }

        }

    }
    for(i=0;i<26;i++)
    {
        printf("%c ",a[i]);
    }
}


