#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        if(n%4==0)
        {
            if(k==0)
            cout<<"off\n";
            else if(k==1)
            cout<<"on\n";
        }
        else
        {
            if(k==1)
            cout<<"ambiguous\n";
            else
            cout<<"on\n";
        }
    }
    return 0;
}