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
    int n,m; cin>>n>>m;
    vector<int>v(n);
    fore(i,0,n)cin>>v[i];

    map<int,int>mp;
    fore(i,0,n){
        int a; cin>>a;
        mp[v[i]]=a;
    }

    sort(v.begin(),v.end());

    int ans=0;
    
    // taking one type of flower at a time
    fore(i,0,n){
        ans= max(ans, min(m/v[i], mp[v[i]])*v[i]);  // m/v[i]: No of flowers we can take | mp[v[i]]: No of flowers available
    }

    // Now as we have sorted the array (of petals), two adjacent flowers will have least difference in petals

    for(int i=0; i<n-1; i++){
        if(v[i+1]-v[i]!=1)continue;
        int temp=m;
        int smaller= min(m/v[i], mp[v[i]]);
        temp-= smaller*v[i];

        // taking remaining cost, with next petals
        int larger= min(temp/v[i+1], mp[v[i+1]]);
        temp-=larger*v[i+1];

        // if temp!=0, it means we can replace the smaller petals with larger ones.
        // so temp-> How much space is left ; mp[v[i+1]]-larger -> No of larger petals left ; smaller-> Smaller petals used that can be replaced 
        // c would tell how many smaller elements have been replaced by the larger ones and since the diff is 1, ths sum would get increased by c
        // m-temp = initial sum before replacing smaller elements -> m - temp + c = updated sum after replacement 
        int c= min(temp, min(mp[v[i+1]]- larger,smaller));
        ans=max(ans, m-temp+c);
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