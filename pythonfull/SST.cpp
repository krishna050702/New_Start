#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b;
        cin>>a>>b;
        int x=a*10;
        int y=b*5;
        if(x==y)
        cout<<"ANY\n";
        else if(x<y)
        cout<<"SECOND\n";
        else
        cout<<"FIRST\n";
    }
    return 0;
}




/* A dollars for 10% 
   B dollars for 20%

   /20*100 */