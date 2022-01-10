#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin >> n;
    long long sumeven = 0, sumodd = 0;
    for (long long i = 1; i <= 2 * n; i++)
    {
        if (i % 2 == 0)
        {
            sumeven = sumeven + i;
        }
        else
        {
            sumodd = sumodd + i;
        }
    }
    cout << sumodd << " " << sumeven;
    return 0;
}
