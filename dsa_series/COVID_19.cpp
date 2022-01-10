#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for (int i = 0; i < t; i++)
    {
        int n, m, c, r;
        cin >> n >> m;
        if (n % 2 == 0)
        {
            c = n / 2;
        }
        else
        {
            c = n / 2 + 1;
        }
        if (m % 2 == 0)
        {
            r = m / 2;
        }
        else
        {
            r = m / 2 + 1;
        }
        cout << c * r << endl;
    }
}