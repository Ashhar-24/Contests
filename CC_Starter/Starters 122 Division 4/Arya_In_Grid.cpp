#include <bits/stdc++.h>
using namespace std;

void solve(){
    long n, m, x0, y0,l; cin>>n>>m>>x0>>y0>>l;
    
    long long count=1;
    
    // rows
    int rightrows= (m-y0)/l;
    int leftrows= (y0-1)/l;

    long long rows= rightrows+leftrows;

    //cols
    int upcols = (x0-1)/l;
    int downcols= (n-x0)/l;
    
    long long cols= upcols+downcols;

    // if(rows==0) count=cols;
    // else if (cols==0) count=rows;
    // else 
    count= (rows*cols) + rows + cols;

    // cout<<count;

    // if(l==1) cout<<m*n<<'\n';
    // else if (m==1 and n==1) cout<<1<<'\n';
    // else if (m==1) cout<<cols<<'\n';
    // else if (n==1) cout<<rows<<'\n';
    // else 
    cout<<count+1<<'\n';
    
}	


int main() {
    int t=1; 
    cin >> t;
    while(t--){
        solve();
    }

    return 0;
}