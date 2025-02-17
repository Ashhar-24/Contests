// #include <bits/stdc++.h>
// #define ll long long
// #define pii pair<int, int>
// #define pll pair<long long, long long>
// #define vi vector<int>
// #define vll vector<long long>
// #define vpll vector<pll>
// #define mii map<int, int>
// #define mll map<ll,ll>
// #define ump unordered_map
// #define prq priority_queue
// #define lb lower_bound
// #define ub upper_bound
// #define mc <char,int>
// #define si set<int>
// #define sc set<char>
// #define f(i,s,e) for(long long int i=s;i<e;i++)
// #define cf(i,s,e) for(long long int i=s;i<=e;i++)
// #define rf(i,e,s) for(long long int i=e-1;i>=s;i--)
// #define all(x) (x).begin(),(x).end()
// #define rall(x) (x).rbegin(),(x).rend()
// #define acm accumulate
// #define pb push_back
// #define ff first
// #define ss second
// #define eb emplace_back
// #define mod 100000007
// using namespace std;
// // int expo(int a, int b, int mod) {int res = 1; while (b > 0) {if (b & 1)res = (res * a) % mod; a = (a * a) % mod; b = b >> 1;} return res;}		// (a^b)%m
// // bool isprime(int n){ if(n==1)return false; for(int i=2; i<=sqrt(n); i++){ if(n%i==0)return false;} return true;}
// // vector<int> convertbinary64(int n){ vector<int> v(64,0); int i=0; while(n>0){ v[i]=n%2; n/=2; i++;} return v;}   // this represents the binary form in reverse manner
// // int convertdecimal(vector<int> v){int ans=0; for(int i=0; i<64; i++){ ans+=v[i]*pow(2,i);}return ans;}

// void solve(){
//     int n,k; cin>>n>>k;

// }	


// signed main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     cout.tie(NULL);

//     int t=1; 
//     cin >> t;
//     while(t--){
//         solve();
//     }

//     return 0;
// }
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool solveTestCase() {
    int N, K;
    cin >> N >> K;
    
    // Initialize the array A
    vector<int> A(N);
    for (int i = 0; i < N; ++i) {
        A[i] = i + 1; // Start with A[i] = i + 1
    }
    
    // Process each constraint
    for (int j = 0; j < K; ++j) {
        int L, R, m;
        cin >> L >> R >> m;
        --L, --R; // Convert to 0-based indexing

        // Ensure min(A[L], ..., A[R]) != m
        bool found = false;
        for (int i = L; i <= R; ++i) {
            if (A[i] == m) {
                // Modify A[i] to any value other than m while keeping it in range [1, N]
                A[i] = (m == 1) ? 2 : 1;
                found = true;
            }
        }

        // After modification, check if the constraint is satisfied
        int currentMin = *min_element(A.begin() + L, A.begin() + R + 1);
        if (currentMin == m) {
            return false; // Conflict, no valid array possible
        }
    }
    
    // Output the result
    for (int i = 0; i < N; ++i) {
        cout << A[i] << " ";
    }
    cout << endl;
    return true;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        if (!solveTestCase()) {
            cout << -1 << endl;
        }
    }
    return 0;
}