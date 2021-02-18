//A program to check perfect number
//Example: 6,28,496,8128 etc

#include<stdio.h>
void perfect_num(int);
int main()
{

    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    perfect_num(n);

}

void perfect_num(int n)
{
    int i,sum=0;
    for(i=1;i<n;i++)
    {
        if(n%i==0)
        {
            sum=sum+i;

        }
    }
    if(sum==n)
    {
        printf("%d is a Perfect",sum);
    }
    else
    {
      printf("%d is not a Perfect",sum);
        }

}
