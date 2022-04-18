#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x,y;
        cin>>x>>y;
        if(x<y)
        cout<<"FIRST\n";
        else if(y<x)
        cout<<"SECOND\n";
        else
        cout<<"ANY\n";

    }
    return 0;
}