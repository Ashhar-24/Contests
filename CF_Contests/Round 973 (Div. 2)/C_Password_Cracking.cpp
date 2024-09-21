#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define pb push_back
#define fore(i,a,b) for(int i = a; i < b; i++)
#define revfore(i,a,b) for(int i = a; i >= b; i--)
#define all(v) v.begin(), v.end()
#define yes cout<<"YES\n"
#define no cout<<"NO\n"
// #define endl '\n'
#define INF 1e18
#define debug(x) cout<<x<<endl 
int expo(int a, int b, int mod) {int res = 1; while (b > 0) {if (b & 1)res = (res * a) % mod; a = (a * a) % mod; b = b >> 1;} return res;}		// (a^b)%m
bool isprime(int n){ if(n==1)return false; for(int i=2; i<=sqrt(n); i++){ if(n%i==0)return false;} return true;}
vector<int> convertbinary64(int n){ vector<int> v(64,0); int i=0; while(n>0){ v[i]=n%2; n/=2; i++;} return v;}   // this represents the binary form in reverse manner
int convertdecimal(vector<int> v){int ans=0; for(int i=0; i<64; i++){ ans+=v[i]*pow(2,i);}return ans;}

bool getresponse(string &s){
    bool ans;
    cout<<"? "<<s<<endl;
    cin>>ans;
    return ans;
}

void solve(){
    int n; cin>>n;
    // assuming the initial string to start with 0
    string s = "0";
    bool res= getresponse(s);
    if(!res) s ="1";

    // guessing its suffix
    while(s.size()<n){
        s+="1";
        bool res= getresponse(s);
        if(!res){
            s.pop_back();
            s+="0";
            res= getresponse(s);
            if(!res){
                s.pop_back();
                break;              // breaking as both the values "10" and "11" gave false meaning "1" is the suffix
            }
        }
    }

    // guessing the prefix
    while(s.size()<n){
        s= "1" + s;
        bool res = getresponse(s);
        if(!res){
            s=s.substr(1);
            s= "0" + s;
            res= getresponse(s);
            if(!res){
                s=s.substr(1);
                break;
            }
        }
    }
    cout<<"! "<<s<<endl;

    /*
        The above method of first guessing the middle no and then the suffix and prefix, this would exactly take
        2n-1 guesses. How?
        The first no would take 1 guess at max.
        Then let the string be of size 7. Now since we have guessed a no using 1 guess, so we have to find only remaining
        6 nos. We start by first guessing the suffix part. Let there be 4 nos to the right, we would then require at max 
        8 guesses (1+8). Now we are left to guess 2 no to the left (prefix) and this would take at max 4 guesses
        So toal guess would now be: 1+8+4 -> 13 which is 1 less than 14 (ie, 2*7).
    */

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