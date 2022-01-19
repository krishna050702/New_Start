#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n,x,count=0,sum=0;
        cin>>n>>x;
        int arr[n];
        for(int j=0;j<n;j++)
        cin>>arr[j];
        sort(arr,arr+n);
        
        for(int j=0;j<n;j++)
        {
            if(sum<x)
            {
                sum=sum+arr[n-1-j];
                count++;
            }
            else
            break;
        }
        if(sum<x)
        cout<<"-1\n";
        else
        cout<<count<<endl;
    }
    return 0;
}