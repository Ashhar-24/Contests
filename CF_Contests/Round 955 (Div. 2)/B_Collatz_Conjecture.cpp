#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int x,y,k; cin>>x>>y>>k;
    int rem = x%y;

    if(y-rem > k){
        x+=k;
        cout<<x<<'\n';
    }

    else if(y-rem==k){
        x+=k;
        while(true){
            if(x%y==0){
                x/=y;
            }
            else break;
        }
        cout<<x<<'\n';
    }
    else{
        x+=(y-rem);
        k-= (y-rem);
        while(true){
            if(x%y==0){
                x/=y;
            }
            else break;
        }
        rem=x%y;
        if(y-rem>k){
            cout<<x+k<<'\n';
        }
        else if(y-rem==k){
            cout<<1<<'\n';
        }
        else cout<<(k+1)%y<<'\n';
        // k-=y-(x%y);
        // if(k<=0){
        //     cout<<x+y-(x%y)<<'\n';
        // }
        // else cout<<k%y<<'\n';

    }
}	


int main() {
    int t=1; 
    cin >> t;
    while(t--){
        solve();
    }

    return 0;
}