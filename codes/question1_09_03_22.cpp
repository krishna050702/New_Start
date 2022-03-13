#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n;
        cin>>n;
        char str[n];
        cin>>str;
        int res=0,count=0;
        for (int j = 0; j<n; j++)
        {
            if(j<n-1)
            {
                if(str[j]==str[j+1])
                {
                    res++;
                    j++;
                }
                else{
                    res++;
                }
            }
            else
            {
                res++;
            }
        }
        cout<<res<<endl;
    }
    return 0;
}