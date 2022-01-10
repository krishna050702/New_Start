#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for(int i=0;i<t;i++)
    {
        int N, x, y;
        cin >> N >> x >> y;
        if(x%2 == y%2)
        {
            cout << "0" << endl;
        }
        else{ cout << "1" << endl; }
    }
    return 0;
}