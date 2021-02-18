/*
        1
      2 3 2
    3 4 5 4 3
  4 5 6 7 6 5 4
5 6 7 8 9 8 7 6 5

*/
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n=5,i,j,s,k;
    for(i=1; i<=n; i++)
    {
        for(s=1; s<=n-i; s++)
            cout<<"  ";
        k=i-1;
        for(j=1; j<=2*i-1; j++)
        {

            if(i>=j)
            {
                k++;
            }
            else
            {
                k--;
            }
            cout<<k<<" ";
        }
        cout<<endl;
    }
}
