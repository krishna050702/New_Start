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
        int arr[n];
        long long one=0,two=0;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            if(arr[i]==1)
            one++;
            else if(arr[i]==2)
            two++;
        }
        long long result=one*(one-1)/2 + (n-one)*one + two*(two-1)/2;
        cout<<result<<endl;
    }
    return 0;
}