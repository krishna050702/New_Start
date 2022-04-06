#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int x=0;
        x=n/4;
        if(n%4!=0)
        {
            x=x+1;
        }
        cout<<x<<endl;
    }
    return 0;
}