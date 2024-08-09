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

// bool isprime(int n){
//    if(n==1)return false;
//    for(int i=2; i<=sqrt(n); i++){
//        if(n%i==0)return false;
//    }
//    return true;
//}
// vector<int> convertbinary64(int n){
//    vector<int> v(64,0);
//    int i=0;
//    while(n>0){
//        v[i]=n%2;
//        n/=2;
//        i++;
//    }
//    return v;       // this represents the binary form in reverse manner
//}

// int convertdecimal(vector<int> v){
//    int ans=0;
//    for(int i=0; i<64; i++){
//        ans+=v[i]*pow(2,i);
//    }
//    return ans;
//}

void solve(){
    int n; cin>>n;
    string s; cin>>s;

    string s2=s;
    reverse(all(s2));
    // a-> k, b-> ck,  c-> ack, d-> back
    int a=0,b=0,c=0,d=0;
    fore(i,0,n){
        if(s2[i]=='k'){
            a++;
        }
        if(s2[i]=='c' and a){
            b++; a--;
        }
        if(s2[i]=='a' and b){
            c++; b--;
        }
        if(s2[i]=='b' and c){
            d++; c--;
        }
    }
    int ans = d*3;      // elements reduced
    int cnt = d;        // new chars added

    while(cnt){
        if(c){
            ans+= 3*c;
            c=0;
        }
        else if(b and cnt>=2){
            int temp= min(2*b, cnt);
            cnt-= (temp/2);
            b-= (temp/2);
            ans+= (temp/2)*3;
        }
        else if(a and cnt>=3){
            int temp= min(3*a, cnt);
            cnt-=((temp/3)*2);
            ans+=(temp/3)*3;
            a-=temp/3;
        }
        else{
            ans+=(cnt/4)*3;
            cnt -= (cnt/4)*3;
            if(cnt<4) break;
        }
    }

    // a2-> f, b2-> fr, c2-> fro, d2-> fron, e2-> front
    int a2=0, b2=0, c2=0,d2=0, e2=0;
    for(char c:s){
        if(c=='f')a2++;
        if(c=='r' and a2){
            b2++; a2--;
        }
        if(c=='o' and b2){
            c2++; b2--;
        }
        if(c=='n' and c2){
            d2++; c2--;
        }
        if(c=='t' and d2){
            e2++; d2--;
        }
    }

    ans+=e2*4;
    cnt=e2;
    while(cnt){
        if(d2){
            ans+= 4*d2;
            d2=0;
        }
        else if(c2 and cnt >=2){
            int temp= min(2*c2, cnt);
            ans+= (temp/2)*4;
            cnt-=(temp/2);
            c2-=(temp/2);
        }
        else if(b2 and cnt>=3){
            int temp = min(cnt, 3*b2);
            ans+=(temp/3)*4;
            cnt-=(temp/3)*2;
            b2-=(temp/3);
        }
        else if(a2 and cnt>=4){
            int temp= min(cnt, a2*4);
            ans+=(temp/4)*4;
            cnt-=(temp/4)*3;
            a2-=(temp/4);
        }
        else{
            ans+=(cnt/5)*4;
            cnt-= (cnt/5)*4;
            if(cnt<5) break;
        }
    }


    cout<<s.size()-ans<<endl;

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