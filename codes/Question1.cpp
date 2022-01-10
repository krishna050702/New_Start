#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin>>test;
    while(test--)
    {
        int n,maxelement=INT_MIN,minelement=INT_MAX;
        cin>>n;
        int arr[n];
        for (int x = 0; x <n; x++)
        {
            cin>>arr[x];
        }
         
         for(int j=0;j<n;j++)
         {
             maxelement=max(maxelement,arr[j]);
             minelement=min(minelement,arr[j]);
         }
        int result=abs(maxelement-minelement)
         cout<<result<<endl;
    }
    return 0;
}