#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin>>n;
        string str;
        cin>>str;
        string result="AC";
        for(int i=0;i<n-3;i++)
        {
            if(str[i]=='c' && str[i+1]=='o' && str[i+2]=='d' && str[i+3]=='e')
            break;
            if(str[i]=='c' && str[i+1]=='h' && str[i+2]=='e' && str[i+3]=='f')
            {
                result="WA";
                break;
            }
        }
        cout<<result<<endl;
    }
    return 0;
}