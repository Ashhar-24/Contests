#include <bits/stdc++.h>
using namespace std;
//#define int long long int
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
    int arr[n][2];

    int mindiff=INT_MAX, ind=-1;
    fore(i,0,n){
        cin>>arr[i][0]>>arr[i][1];
        if(mindiff>=(arr[i][1]-arr[i][0])){
            mindiff= (arr[i][1]-arr[i][0]);
            ind=i;
        }
    }

    float speed= (ind+1)/ (1.0* arr[ind][1]);

    fore(i,0,n){
        float t= (i+1)/(speed);
        if(t>=(arr[i][0]*1.0) and t<= (1.0* arr[i][1]))continue;
        else{
            cout<<-1<<endl;
            return;
        }
    }

    cout<<speed<<endl;
}	


void main_() {
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    int t=1; 
    cin >> t;
    for(int i=1; i<=t; i++){
        cout<<"Case #"<<i<<": ";
        solve();
    }
}

static void run_with_stack_size(void (*func)(void), size_t stsize) {
    char *stack, *send;
    stack = (char *)malloc(stsize);
    send = stack + stsize - 16;
    send = (char *)((uintptr_t)send / 16 * 16);
    asm volatile(
        "mov %%rsp, (%0)\n"
        "mov %0, %%rsp\n"
        :
        : "r"(send));
    func();
    asm volatile("mov (%0), %%rsp\n" : : "r"(send));
    free(stack);
}

int main() {
    run_with_stack_size(main_, 1024 * 1024 * 1024); // run with a 1 GiB stack
    return 0;
}