#include <bits/stdc++.h>
#define int long long int
#define pb push_back
#define fore(i,a,b) for(int i = a; i < b; i++)
#define revfore(i,a,b) for(int i = a; i >= b; i--)
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
    int arr[n][m];
    fore(i,0,n){
        fore(j,0,m){
            cin>>arr[i][j];
        }
    }

    if(n==1 and m==1){
        cout<<-1<<'\n'; 
    } 
    else{
        // column matrix
        if(m==1){
            fore(i, 1, n) cout<<arr[i][0]<<'\n';
            cout<<arr[0][0]<<'\n';
        }
        // row matrix
        else if(n==1){
            fore(i, 1, m) cout<<arr[0][i]<<' ';
            cout<<arr[0][0]<<'\n';
        }   

        // 2D matrix
        else{
            fore(i, 0, n){
                fore(j, 1, m) cout<<arr[i][j]<< " ";
                cout<<arr[i][0]<<'\n';
            }
        }
    }
}	


signed main() {
    int t=1; 
    cin >> t;
    while(t--){
        solve();
    }

    return 0;
}