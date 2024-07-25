#include <bits/stdc++.h>
#define int long long int
#define pb push_back
#define fore(i,a,b) for(int i = a; i < b; i++)
#define revfore(i,a,b) for(int i = a; i >= b; i--)
#define yes cout<<"YES\n"
#define no cout<<"NO\n"
using namespace std;

bool isprime(int n){
    if(n==1)return false;
    for(int i=2; i<=sqrt(n); i++){
        if(n%i==0)return false;
    }
    return true;
}
vector<int> convertbinary64(int n){
    vector<int> v(64,0);
    int i=0;
    while(n>0){
        v[i]=n%2;
        n/=2;
        i++;
    }
    return v;       // this represents the binary form in reverse manner
}

int convertdecimal(vector<int> v){
    int ans=0;
    for(int i=0; i<64; i++){
        ans+=v[i]*pow(2,i);
    }
    return ans;
}

void solve(){
    int n; cin>>n;
    vector<int>v(n);
    map<int,int>mp;
    fore(i,0,n){
        cin>>v[i];
        mp[v[i]]++;
    }
    int ans=0;
    vector<int>freq;
    for(auto &p: mp){
        freq.pb(p.second);
    }
    // sort(freq.begin(),freq.end());

    // int i= freq.size()-1;
    // int d=1, sum=0;
    // while(i>=0){
    //     sum+=freq[i];
    //     ans=max(ans, sum-(sum%d));

    //     // if((sum+freq[i])%d==0){
    //     //     sum+=freq[i];
    //     //     ans=max(ans, sum);
    //     // }
    //     // else{
    //     //     int temp= sum;
    //     //     temp+=freq[i];
    //     //     temp-=(temp%d);
    //     //     ans=max(ans, temp);
    //     //     sum+=freq[i]; 
    //     // }
    //     i--;
    //     d++;
    // }

    sort(freq.begin(),freq.end(), greater<int>());
    int i=0, sum=0;
    while(i<freq.size()){
        sum+=freq[i];
        ans=max(ans, sum-(sum%(i+1)));
        i++;
    }

    cout<<ans<<'\n';

}	


signed main() {
    int t=1; 
    cin >> t;
    while(t--){
        solve();
    }

    return 0;
}

// upsolve