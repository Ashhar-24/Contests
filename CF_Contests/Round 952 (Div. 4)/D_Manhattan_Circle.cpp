#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n,m; cin>>n>>m;
    char arr[n][m];
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>arr[i][j];
        }
    }
    
    int a=-1,b=-1;

    for(int i=0; i<m; i++){
        int ct=0;
        for(int j=0; j<n; j++){
            if(arr[j][i]=='#')ct++;
        }
        if(ct==1){
            for(int j=0; j<n; j++){
                if(arr[j][i]=='#')b=j;
            }
        }
    }

    int ct=0;
    for(int i=0; i<m; i++){
        if(arr[b][i]=='#')ct++;
    }

    int x=0;
    for(int i=0; i<m; i++){
        if(arr[b][i]=='#'){
            x++;
            if(x== ct/2 + 1) a =i;
        }
    }

    cout<<b+1<<" "<<a+1<<'\n';

}	


int main() {
    int t=1; 
    cin >> t;
    while(t--){
        solve();
    }

    return 0;
}