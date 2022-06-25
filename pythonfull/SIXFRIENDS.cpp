#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int two,tri;
        cin>>two>>tri;
        int x=3*two;
        int y=2*tri;
        if(x>y)
        cout<<y<<endl;
        else
        cout<<x<<endl;
    }
    return 0;
}


