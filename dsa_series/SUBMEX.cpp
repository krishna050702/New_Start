#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int N,K,X;
        cin>>N>>K>>X;

        if(X>K)
        cout<<"-1"<<endl;
        else
        {
            int MEX=0;
            for(int j=0;j<N;j++)
            {
                if(MEX==X)
                MEX=0;
                cout<<MEX<<" ";
                MEX++;
            }
            cout<<endl;
        }
    }
    return 0;
}