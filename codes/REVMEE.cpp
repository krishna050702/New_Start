#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    // vector<int> a;
    // for (int i = 1; i <=n; i++)
    // {
    //     a.push_back();
    // }
    // vector<int>::iterator it;
    // for(it=a.end()-1;it>=a.begin();it--)
    // cout<<*it<<" ";

    int arr[n];
    for (int i = 0; i <n; i++)
    {
        cin>>arr[i];
    }
    for (int i =n-1; i>=0; i--)
    {
        cout<<arr[i]<<" ";
    }
    
    
    
    return 0;
}