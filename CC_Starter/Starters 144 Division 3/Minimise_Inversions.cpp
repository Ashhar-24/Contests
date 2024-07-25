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

string invert(string s, int x, int y){
    int i=0;
    // x: no of leftmost 1's to be flipped 
    // y: no of rightmost 0's to be flipped
    while(i<s.size() and x>0){
        if(s[i]=='1'){
            s[i]='0';
            x--;
        }
        i++;
    }
    i=s.size()-1;
    while(i>=0 and y>0){
        if(s[i]=='0'){
            s[i]='1';
            y--;
        }
        i--;
    }
    return s;
}

void solve(){
    int n,k; cin>>n>>k;
    string s; cin>>s;

    int ans=1e9, x=0, y=k;
    while(x<=k and y>=0){
        string temp = invert(s,x,y);
        int inv=0, cnt=0;
        fore(i,0,n){
            if(temp[i]=='1')cnt++;
            else inv+=cnt;
        }
        ans=min(ans,inv);
        x++; y--;
    }
    cout<<ans<<"\n";
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