#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x;
        cin>>x;
        // int nor=0,small=1,huge=2;
        int current=x%3;
        if(current==0)
        cout<<"NORMAL\n";
        else if(current==1)
        cout<<"HUGE\n";
        else
        cout<<"SMALL\n";
    }
    return 0;
}