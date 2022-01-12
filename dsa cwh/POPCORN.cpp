#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int A1, A2, B1, B2, C1, C2, a = 0, b = 0, c = 0;

        cin >> A1 >> A2 >> B1 >> B2 >> C1 >> C2;

        a = A1 + A2;
        b = B1 + B2;
        c = C1 + C2;

        if (a > b && a > c)
            cout << a << endl;
        else if (b > a && b > c)
            cout << b << endl;
        else if (c > a && c > a)
            cout << c << endl;
    }
    return 0;
}