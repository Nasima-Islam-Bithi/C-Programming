
#include<stdio.h>
int main()
{
    char s[100][100],t[100];
    int n,i,j;
    printf("Number of strings:\n");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        scanf("%s",s[i]);
        //gets(s[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(strcmp(s[i],s[j])>0)
            {
                strcpy(t,s[i]);
                strcpy(s[i],s[j]);
                strcpy(s[j],t);
            }
        }

    }
    printf("\n");
    for(i=0;i<n;i++)
    {
        printf("%s ",s[i]);
    }




}
