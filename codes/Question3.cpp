#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n, k;
        cin >> n >> k;
        int arr[n];
        for (int j = 0; j < n; j++)
        {
            cin >> arr[j];
        }

        
        sort(arr, arr + n);
        int result = arr[0];
        // if (k <= 1)
        //     cout << arr[0] << endl;
        // else
        // {
            for (int j =0; j<k; j++)
            {
                result =result & arr[j];
            }
            cout <<result<< endl;
        // }
        
        
    }
    return 0;
}