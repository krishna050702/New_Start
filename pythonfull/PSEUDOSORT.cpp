#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n,count = 0;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (arr[i - 1] > arr[i] && i >= 1)
            {
                swap(arr[i - 1], arr[i]);
                if (arr[i - 2] > arr[i - 1] && i >= 2)
                {
                    count += 2;
                }
                else if (arr[i - 2] < arr[i - 1] && i >= 2)
                {
                    count += 1;
                }
                else
                {
                    count += 1;
                }
            }
        }
        if (count < 2)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}