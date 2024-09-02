#include <bits/stdc++.h>
using namespace std;
// #define int long long int
#define pb push_back
#define fore(i,a,b) for(int i = a; i < b; i++)
#define revfore(i,a,b) for(int i = a; i >= b; i--)
#define all(v) v.begin(), v.end()
#define yes cout<<"YES\n"
#define no cout<<"NO\n"
#define endl '\n'
#define INF 1e18
#define debug(x) cout<<x<<endl 
int expo(int a, int b, int mod) {int res = 1; while (b > 0) {if (b & 1)res = (res * a) % mod; a = (a * a) % mod; b = b >> 1;} return res;}		// (a^b)%m
bool isprime(int n){ if(n==1)return false; for(int i=2; i<=sqrt(n); i++){ if(n%i==0)return false;} return true;}
vector<int> convertbinary64(int n){ vector<int> v(64,0); int i=0; while(n>0){ v[i]=n%2; n/=2; i++;} return v;}   // this represents the binary form in reverse manner
int convertdecimal(vector<int> v){int ans=0; for(int i=0; i<64; i++){ ans+=v[i]*pow(2,i);}return ans;}

void solve(){
    int n; cin>>n;
    string s; cin>>s;
    
    vector<vector<int>>prefixSumEven(26, vector<int>(n,0));
    vector<vector<int>>suffixSumEven(26, vector<int>(n,0));
    vector<vector<int>>prefixSumOdd(26, vector<int>(n,0));
    vector<vector<int>>suffixSumOdd(26, vector<int>(n,0));

    // incrementing at the positions where the chars are present
    fore(i,0,n){
        if(i&1){
            prefixSumOdd[int(s[i])-'a'][i]++;
            suffixSumOdd[int(s[i])-'a'][i]++;
        }
        else{
            prefixSumEven[int(s[i])-'a'][i]++;
            suffixSumEven[int(s[i])-'a'][i]++;
        }
    }

    // calculating the sum
    fore(i,0,26){
        fore(j, 1, n){
            prefixSumEven[i][j]+=prefixSumEven[i][j-1];
            prefixSumOdd[i][j]+=prefixSumOdd[i][j-1];
        }

        for(int j=n-2; j>=0; j--){
            suffixSumEven[i][j]+=suffixSumEven[i][j+1];
            suffixSumOdd[i][j]+=suffixSumOdd[i][j+1];
        }
    }

    int ans=n;

    if(n%2==0){
        // no removal of element, just check the cnt of elements to be changed by counting for both (odd/even) positions

        int mx1=0, mx2=0;       // will keep the max cnt of the char present

        fore(i,0,26){
            mx1=max(mx1, prefixSumEven[i][n-1]);
            mx2=max(mx2, prefixSumOdd[i][n-1]);
        }

        ans= min(ans,n- (mx1+mx2));
        cout<<ans<<endl;
        return;
    }

    // when n is odd
    if(n==1){
        cout<<1<<endl;
        return;
    }

    // now we would remove each element from the string and check for all possible answers

    fore(i,0,n){
        
        // removing the 1st element
        if(i==0){
            int mx1=0, mx2=0;
            fore(j,0,26){
                mx1=max(mx1, suffixSumEven[j][1]);
                mx2=max(mx2, suffixSumOdd[j][1]);
            }
            ans=min(ans, n-(mx1+mx2));
            continue;
        }
        
        // removing last element
        if(i==n-1){
            int mx1=0, mx2=0;
            fore(j,0,26){
                mx1=max(mx1, prefixSumEven[j][n-2]);
                mx2=max(mx2, prefixSumOdd[j][n-2]);
            }
            ans=min(ans, n-(mx1+mx2));
            continue;
        }

        // now removing an element from between
        int mx1=0, mx2=0;
        fore(j,0,26){
            mx1=max(mx1,prefixSumEven[j][i-1]+suffixSumOdd[j][i+1]);
            mx2=max(mx2, prefixSumOdd[j][i-1]+ suffixSumEven[j][i+1]);
        }
        ans=min(ans, n-(mx1+mx2));
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