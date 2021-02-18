#include<bits/stdc++.h>
using namespace std;

int main()
{
    int secret_number=7;
    int guess, guess_limit=3,c=1,flag=1;
    while(guess!=secret_number)
    {
        if(c<=guess_limit)
        {
        cout<<"Guess a number:";
        cin>>guess;
        c++;
        }
       else
        {
            cout<<"You cross the limit"<<endl;
            flag=0;
            break;
        }
    }
    if(flag)
    {
        cout<<"Congratulations!!!! you win..."<<endl;
    }
    else
    {
        cout<<"Sorry!!! you lose..."<<endl;
    }

}
