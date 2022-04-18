#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x,y,z;
        cin>>x>>y>>z;
        int rem=y/x;
        int b=z-rem;
        if(b<0)
        cout<<0<<endl;
        else
        cout<<b<<endl;
    }
    return 0;
}