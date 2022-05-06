#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        int flag=1;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 1; j < n; j++)
            {
                int x = arr[j];
                int y=arr[j-1]*arr[j+1];
                if(x*x==y)
                flag=0;
                else
                flag=1;
            }
        }
        if(flag==1)
        cout<<"yes\n";
        else
        cout<<"no\n";
    }
    return 0;
}