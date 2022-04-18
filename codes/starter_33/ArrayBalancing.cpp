#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,suma=0,sumb=0;
        
        cin>>n;
        int a[n],b[n];
        for(int i=0;i<n;i++)
        cin>>a[i];

        for(int i=0;i<n;i++)
        cin>>b[i];

        for(int i=0;i<n;i++)
        {
            int temp1=a[i];
            int temp2=a[i+1];
            suma=suma+abs(temp1-temp2);
        }
        

        for(int i=0;i<n;i++)
        {
            int temp3=b[i];
            int temp4=b[i+1];
            sumb=sumb+abs(temp3-temp4);
        }

        cout<<suma+sumb<<endl;

    }
    return 0;
}