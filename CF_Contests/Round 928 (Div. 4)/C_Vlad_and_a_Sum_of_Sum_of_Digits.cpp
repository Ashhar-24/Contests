#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;

        // vector <int> v;
        // for(int i=1; i<=n; i++){
        //     v.push_back(i%10);
        // }

        int x= n/10;
        int z= n/100;
        if(z)x=x*z;
        int y=x+n%10;

        long long ans=0;
        for(int i=x; i<=y; i++) ans+=i;

        int temp=x, temp1=x-1, temp2=x+9-1;
        while(temp--){
            for(int i=temp1; i<=temp2; i++) ans+=i;
            temp1--;
            temp2--;
        }



        // if(n<=9) cout<< (n*(n+1)/2)<<'\n';
        // else 

        // int x=n/9;
        // int y=n%9;

        // long long ans= (45*x)+(y*(y+1)/2);
        cout<<ans<<'\n';

    }
}