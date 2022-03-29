#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        int ans=0;
        for(int i=0;i<n;i++)
        {
            int s,imd;
            cin>>s>>imd;
            if(s<=x && ans<imd)
            ans=imd;
        }
        cout<<ans<<endl;
    }
    return 0;
}