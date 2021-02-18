/* Calculate the subset of a set
input : {4, 5, 6, 7}
output: {4 , 5} {4 , 6} {4 , 7} {5 , 6} {5 , 7} {6 , 7}
*/

#include<stdio.h>

int main()
{
    int a[100],i,j,n;
    printf("Enter the size of set: \n");
    scanf("%d",&n);
    printf("Enter the element of set:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    for(i=0;i<n;i++)
    {

        for(j=i+1;j<n;j++)
        {
        printf("{%d , %d} ",a[i],a[j]);

        }

    }

}


