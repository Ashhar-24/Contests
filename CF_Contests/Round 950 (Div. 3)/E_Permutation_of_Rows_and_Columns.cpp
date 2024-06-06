#include <bits/stdc++.h>
#define ll long long
using namespace std;
const int N= 2e5+10;

void solve(){
    int n,m; cin>>n>>m;
    
    // Unique way of implementation.

    int row[N], col[N];         // keeping record of the initial position of the elements

    for(int i=1; i<=n; i++){
        for(int j=1; j<=m; j++){
            int a; cin>>a;
            row[a]=i;
            col[a]=j;
        }
    }

    // Taking the new array as input and matching the new position.

    map<pair<int,int>, int> ctr;        // keeps record of the no of elements that change in posn from it i to i` (row)
    map<pair<int,int>, int> ctc;        // keeps record of the no of elements that change in posn from it j to j` (col)

    for(int i=1; i<=n; i++){
        for(int j=1; j<=m; j++){
            int a; cin>>a;
            if(row[a]!=i){
                ctr[{row[a], i}]++;
            }

            if(col[a]!=j){
                ctc[{col[a], j}]++;
            }
        }
    }

    /*
        The two maps stores the count of elements that changes it's position in row/col.

        This is helpful as if a row is swapped to a new row then the total no of elements that have been moved to
        new row (ie from r[a] to i) is equal to m (total cols). 
        Similarly if a col is swapped to a new col, then no of elements swapped
        from (col[a],j) will be equal to n (total rows).
        By checking this we can find out that whether the new array is possible to obtain or not.
    */ 

    bool ans=1;

    // Checking that the no of elements swapped from r[a] to i is equal to m (total cols) or not.
    for(auto [i,j]: ctr){           // here [i,j] i represents {r[a],i} while j represent the total elements.
        ans= ans & (j==m);
    }

    // Similarly for columns

    for(auto [i,j]: ctc){
        ans= ans & (j==n);
    }

    if(ans)cout<<"YES\n";
    else cout<<"NO\n";
    
}	


int main() {
    int t=1; 
    cin >> t;
    while(t--){
        solve();
    }

    return 0;
}

// Upsolve
