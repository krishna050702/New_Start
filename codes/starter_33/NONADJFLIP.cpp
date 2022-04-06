#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,ans=0;
        string s;
        cin>>n>>s;
        if(s[0]=='1')
        {
            ans=1;
        }
        for(int i=1;i<n;i++)
        {
            if(s[i]=='1' && s[i-1]=='1')
            {
                ans=2;
                break;
            }
            else if(s[i]=='1')
            {
                ans=1;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}