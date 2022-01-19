#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int k,count=0;
        cin>>k;
        while(k%2==0)
        {
            count++;
            k=k/2;
        }
       cout<<count<<endl;
    }
    return 0;
}