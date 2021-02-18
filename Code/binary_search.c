/* A program of binary search in a sorted array

output:
    Enter the number of element:
    5
    Enter the array elements:
    1 2 3 4 5
    Enter the number to search:
    3
    Found at position 3
*/
#include<stdio.h>

int binary_search(int a[],int low , int high)
{
    int i,j,value;
    int mid;
    printf("Enter the number to search:\n");
    scanf("%d",&value);
   while(low<=high)
   {
       mid=(low+high)/2;
       if(a[mid]<value)
       {
           low=mid+1;

       }
       else if(a[mid]>value)
       {
           high=mid-1;
       }
       else
       {
           return mid+1;
       }

   }
return -1;
}
int main()
{
    int a[100];
    int i,n,pos;
    printf("Enter the number of element:\n");
    scanf("%d",&n);
    printf("Enter the array elements:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);

    }

    pos=binary_search(a,0,n-1);
    if(pos==-1)
    {
        printf("Not found");
    }
    else
    {
        printf("Found at position %d",pos);
    }


}
