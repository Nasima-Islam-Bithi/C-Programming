// A program to search a value in an unsorted array

#include<stdio.h>
//linear search
int linear(int a[],int n)
{
    int val, c=0;
    printf("Enter the value to search:\n");
    scanf("%d",&val);
    for(int i=0;i<n;i++)
    {
    if(a[i]==val)
    {
        c=i+1;
        break;
    }
    }
    if(c)

        return c;
    else
        return -1;

}
int main()
{
    int a[100],i,n,val,loc;
    printf("Total number of elements:\n");
    scanf("%d",&n);

    printf("Enter elements:\n");

    for(i=0;i<n;i++)
    {
    scanf("%d",&a[i]);
    }
    loc=linear(a,n);
if(loc==-1)
{
    printf("Not found");
}
else
{
    printf("Found in %d position\n",loc);
}




}
