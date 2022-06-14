#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int M,x,y;
        cin>>M>>x>>y;
        int ho[101];
        for(int i=0;i<M;i++){
            cin>>ho[i];
        }
        int dis=x*y;
        int count=0;
        for(int i=1;i<101;i++){
            int flag=1;
            for(int j=0;j<M;j++){
                if((i>=ho[j]-dis)&&(i<=ho[j]+dis))
                flag=0;
            }
            if(flag==1)
            count++;
        }
        cout<<count<<endl;
      
    }
	return 0;
}

