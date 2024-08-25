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

void solve(){
    int n; cin>>n;

    vector<vector<int>>pos(4);    // each row depicts 1,2,3 while the columns of each row shows the indices where they are present
    for(int i=1; i<=3; i++){
        pos[i].pb(0);
    }
    
    vector<int>v(n+1);
    for(int i=1; i<=n; i++){
        cin>>v[i];  
        pos[v[i]].pb(i);
    }

    for(int i=1; i<=3; i++){
        pos[i].pb(n+1);
    }
    
    int ans= n* (n+1)/2;

    // now in each iteration, we assume to remove the element 'i' completely from the array
    for(int i=1; i<=3; i++){
        int low= pos[i][1];         // stores the 1st occurence (index) of i
        int high= pos[i][pos[i].size()-2];      // stores the last occurence (index) of i
        set<int>st;         // keeps the type of elements between low and high

        for(int j=low; j<=high; j++){
            st.insert(v[j]);
        }

        int num= (i+1)%3 + 1;       // no that shouldn't be present in between low and high,
        // ie, for 1, 3 shouldn't be present btw low and high; similarly for 2, 1 should not be there; for 3, 2 shouldnt be there
        
        if(st.find(num)!=st.end()) continue;        // num is present in between, so can't do anything
        else{
            // if not found, then we will extend our high and low on either sides upto where 'num' is present
            
            // extreme index towards right (ie, index >=high)
            int high1= *(lower_bound(pos[num].begin(), pos[num].end(), high));
            
            // similarly extreme index towards left, here ( index < low, hence --)
            int low1= *(-- lower_bound(pos[num].begin(), pos[num].end(), low));

            ans-= (high1- high)*(low-low1);     // removing those subarrays which are bad
        }

    }

    cout<<ans<<endl;
    
}	


signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t=1; 
    cin >> t;
    while(t--){
        solve();
    }

    return 0;
}

// upsolve