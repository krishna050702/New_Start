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
        if(x<=1000)
        cout<<"100\n";
        else
        cout<<x*0.1<<endl;
    }
    return 0;
}