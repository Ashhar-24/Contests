#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define pb push_back
#define fore(i,a,b) for(int i = a; i < b; i++)
#define revfore(i,a,b) for(int i = a; i >= b; i--)
#define all(v) v.begin(), v.end()
#define yes cout<<"YES\n"
#define no cout<<"NO\n"
#define endl '\n'
#define INF 1e18
int expo(int a, int b, int mod) {int res = 1; while (b > 0) {if (b & 1)res = (res * a) % mod; a = (a * a) % mod; b = b >> 1;} return res;}		// (a^b)%m
bool isprime(int n){ if(n==1)return false; for(int i=2; i<=sqrt(n); i++){ if(n%i==0)return false;} return true;}
vector<int> convertbinary64(int n){ vector<int> v(64,0); int i=0; while(n>0){ v[i]=n%2; n/=2; i++;} return v;}   // this represents the binary form in reverse manner
int convertdecimal(vector<int> v){int ans=0; for(int i=0; i<64; i++){ ans+=v[i]*pow(2,i);}return ans;}

int N=1e5;
vector<int>seive(N+10,1);

void prime(){
    seive[0] =seive[1] = false;
    for (int i = 2; i <=N; i++) {
        if (seive[i] && (long long)i * i <=N) {
            for (int j = i * i; j <=N; j += i)
               seive[j] = false;
        }
    }
}


void solve(){
    int n; cin>>n;
    vector<int>v(n);
    fore(i,0,n)cin>>v[i];

    // cout<<seive[3];
    map<int,vector<int>>mpeq;
    map<int,int>mp;
    fore(i,0,n){
        mp[v[i]]=i;
        mpeq[v[i]].pb(i);
    }

    vector<int>odd, even;
    fore(i,0,n){
        if(v[i]%2==0)even.pb(v[i]);
        else odd.pb(v[i]);
    }
    // for(int x:even)cout<<x<<" ";

    int a=0,b=0;

    if(odd.size()>=2 ){
        sort(all(odd));
        int last=odd.size()-1;
        if(odd[0]>=1 and odd[last]>1){
            a=odd[0], b=odd[last];
            // cout<<a<<" "<<b;
        }
    }
    if(even.size()>=2){
        // cout<<even[0]<<" "<<even[1];
        if(even[0]>=1 and even[1]>=1){
            a=even[0], b=even[1];
            // cout<<a<<" "<<b;
        }
    }
    else{
        for(auto x:odd){
            for(auto y:even){
                int temp=x+y;
                if(seive[temp]==0){
                    a=x,b=y; 
                    break;
                }
            }
            if(a and b)break;
        }
    }

    if(a and b){
        if(a!=b)cout<<mp[a]+1<<" "<<mp[b]+1<<endl;
        else{
            vector<int>tempo=mpeq[a];
            cout<<tempo[0]+1<<" "<<tempo[1]+1<<endl;
            // else cout<<-1<<endl;
            
        }
    }
    else cout<<-1<<endl;


    // Alternative-> Two Sum Logic
    //     void solve() {
    //     int n; cin >> n;
    //     vector<int>v(n);
    //     map<int, int>mp;
    //     fore(i, 0, n) {
    //         cin >> v[i];
    //     }
    //
    //     vector<int>prime(201,0);
    //     for(int i=1; i<=200; i++){
    //         if(isprime(i))prime[i]=1;
    //         else prime[i]=0;
    //     }

    //     fore(i, 0, n) {
    //         for (int j = 4; j <= 200; j++) {
    //             if (prime[j] == 0) {
    //                 int temp = j - v[i];
    //                 if (mp.find(temp) != mp.end()) {
    //                     cout << mp[temp] + 1 << " " << i + 1 << endl;    // doing i+1, as the current element isn't stored yet
    //                     return;
    //                 }
    //             }
    //         }
    //         mp[v[i]] = i;        // adding at the end to avoid getting ans due to nos at same index
    //     }
    //     cout << -1 << endl;
    // }
}	


signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    prime();
    int t=1; 
    cin >> t;
    while(t--){
        solve();
    }

    return 0;
}