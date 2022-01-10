#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    if (a>b && a>c)
    {
        if (b>c)
        {
            cout<<b<<endl;
        }
        else
        cout<<c<<endl;
    }

    if (b>c && b>a)
    {
        if (a>c)
        {
            cout<<a<<endl;
        }
        else
        cout<<c<<endl;
    }

    if (c>a && c>b)
    {
        if (b>a)
        {
            cout<<b<<endl;
        }
        else
        cout<<a<<endl;
    }
    return 0;
}