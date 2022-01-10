#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for (int i = 0; i <t; i++)
    {
        int z,y,a,b,c,rs=0;
        cin>>z>>y>>a>>b>>c;

        rs=z-y;
        rs=rs-(a+b+c);
        if(rs>=0)
        cout<<"YES\n";
        else
        cout<<"NO\n";
    }
    return 0;
}