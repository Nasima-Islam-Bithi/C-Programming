

#include<stdio.h>
int main()
{
    char up[]="NASIMA", low[]="islam";
    int n1,n2,i,j;
    n1=strlen(up);
    n2=strlen(low);
    //Lower case conversion
    for(i=0; i<n1; i++)
    {
        if(up[i]>='A' && up[i]<='Z')
        {
            up[i]+= 32;
        }
    }
    printf("upper to lower:\n");
    for(i=0; i<n1; i++)
    {
        printf("%c ",up[i]);
    }
    //upper case conversion
    for(i=0; i<n2; i++)
    {
        if(low[i]>='a' && low[i]<='z')
        {
            low[i]-= 32;
        }
    }
    printf("\nLower to upper:\n");
    for(i=0; i<n2; i++)
    {
        printf("%c %d \n",low[i],low[i]);
    }


}
