#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        if(a>b)
        {
            b=b+c;
            if(a>b)
            {
                b=b+d;
            }
            else
            {
                a=a+d;
            }
        }
        else if(b>a)
        {
            a=a+c;
            if(b>a)
            {
                a=a+d;
            }
            else
            {
                b=b+d;
            }
        }

        if(a>=b)
        {
            cout<<"N"<<endl;
        }
        else
        {
            cout<<"S"<<endl;
        }
    }
}