#include <bits/stdc++.h>
#define int long long int
#define pb push_back
#define fore(i,a,b) for(int i = a; i < b; i++)
#define revfore(i,a,b) for(int i = a; i >= b; i--)
#define yes cout<<"Yes\n"
#define no cout<<"No\n"
#define INF 1e18
using namespace std;

// bool isprime(int n){
//     if(n==1)return false;
//     for(int i=2; i<=sqrt(n); i++){
//         if(n%i==0)return false;
//     }
//     return true;
// }
// vector<int> convertbinary64(int n){
//     vector<int> v(64,0);
//     int i=0;
//     while(n>0){
//         v[i]=n%2;
//         n/=2;
//         i++;
//     }
//     return v;       // this represents the binary form in reverse manner
// }

// int convertdecimal(vector<int> v){
//     int ans=0;
//     for(int i=0; i<64; i++){
//         ans+=v[i]*pow(2,i);
//     }
//     return ans;
// }

void solve(){
    int n, q;
    cin>>n>>q;
    string a,b; cin>>a>>b;
    vector<vector<int>> preA(26, vector<int>(n+1, 0));
    vector<vector<int>> preB(26, vector<int>(n+1, 0));

    for(int i=1; i<=n; i++){
        preA[a[i-1]-'a'][i]++;
        preB[b[i-1]-'a'][i]++;
    }

    for(int i=0; i<26; i++){
        for(int j=1; j<=n; j++){
            preA[i][j]+=preA[i][j-1];
            preB[i][j]+=preB[i][j-1];
        }
    }

    while(q--){
        int l,r; cin>>l>>r;

        int cnt=0;
        for(int i=0; i<26; i++){
            // [l,r] both included in the range, therefore using l-1
            int x= preA[i][r]-preA[i][l-1];         // gives the no of times a char present in the range [l,r]
            int y= preB[i][r]-preB[i][l-1];
            cnt+= abs(x-y);                     // calculating the difference in the cnt of a char in both the strings
        }

        cout<< cnt/2<<'\n';
    }
}	


signed main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t=1; 
    cin >> t;
    while(t--){
        solve();
    }

    return 0;
}

// upsolve