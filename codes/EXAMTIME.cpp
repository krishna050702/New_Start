#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int dsa1,toc1,dm1;
        int dsa2,toc2,dm2;
        int s=0,d=0;
        cin>>dsa1>>toc1>>dm1;
        cin>>dsa2>>toc2>>dm2;

        s=dsa1+toc1+dm1;
        d=dsa2+toc2+dm2;


        if(s>d)
        cout<<"DRAGON\n";
        else if(d>s)
        cout<<"SLOTH\n";

        if(s==d)
        {
            if(dsa1>dsa2)
            cout<<"DRAGON\n";
            else if(dsa2>dsa1)
            cout<<"SLOTH\n";
        }
         if(s==d && dsa1==dsa2)
        {
            if(toc1>toc2)
            cout<<"DRAGON\n";
            else if(toc2>toc1)
            cout<<"SLOTH\n";
        }

         if(s==d && dsa1==dsa2 && toc1==toc2 && dm1==dm2)
        cout<<"TIE\n";
    }
    return 0;
}