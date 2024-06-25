#include <bits/stdc++.h>
#define ll long long
using namespace std;

bool isprime(ll n){
    if(n<=1) return false;
    else if(n==2) return true;
    else if(n%2==0) return false;
    else{
        for(int i=3; i<=sqrt(n); i+=2){
            if(n%i==0) return false;
        }
    return true;
    }
}

vector<ll> primes(ll n){
    vector<ll> v;
    for(ll i=1; i<=n; i++){
        if(isprime(i)){
            ll temp = 1ll*i*i;
            v.push_back(temp);
        } 
    }
    return v;
}

bool binary_search(vector<ll> &v, ll temp){
    int l=0, r=v.size()-1;
    while(l<=r){
        int mid = l + (r-l)/2;
        if(v[mid]==temp) return true;
        else if(v[mid]<temp) l = mid+1;
        else r = mid-1;
    }
    return false;
}

int main() {
    int t=1; 
    cin >> t;

    vector<ll>v = primes(100000);

    while(t--){
        ll n; cin>>n;
        bool ans=0;
        n-=4;
        for(int i=0; i<v.size(); i++){
            ll temp = n - v[i];
            if(temp==v[i] || temp==4)continue;
            if(binary_search(v,temp)){
                ans=1;
                break;
            }
        }
        ans ? cout<<"Yes\n" : cout<<"No\n";
    }

    return 0;
}

// upsolve
/*
    This question is similar to 3 sum LC problem.
    The catch here is as N <= 1e10, therefore a,b,c<=1e5. Now as N is even, and a,b,c must be prime so one of them
    (say a) must be 2 as it is the only even prime. Now n-=4. Now we need to find 2 nos whose sum is n.
    
    First we precompute all the primes between 1 and 1e5, and calculate it's square.
    Here though I've used normal method to find primes, we can use Sieve of Erostosthenes for better optimization.
    After that, using binary search/ map we can find if 2 distinct nos are present whose sum is n.
*/