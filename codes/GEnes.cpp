#include<bits/stdc++.h>
using namespace std;
int main()
{
    char a,b;     //r= brown =common,  b= blue   g=green  rare
    cin>>a>>b;
    if((a=='R' ) && ( b=='R' || b=='B' || b=='G' ))
    cout<<"R"<<endl;
    else if((a=='B') &&( b=='B' || b=='G' ) )
    cout<<a<<endl;
    else if(a=='G' && b=='B')
    cout<<b<<endl;
    else if(a=='G' && b=='R')
    cout<<b<<endl;
    else if(a=='G' && b=='G')
    cout<<a<<endl;
    return 0;
}
