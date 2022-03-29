#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,x;
        cin>>a>>b>>x;
        int re=b-a;
        re=re/x;
        cout<<re<<endl;
    }
    return 0;
}