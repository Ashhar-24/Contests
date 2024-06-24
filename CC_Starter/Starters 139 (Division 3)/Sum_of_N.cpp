#include <bits/stdc++.h>
#define ll long long
using namespace std;

bool isprime(ll n){
    if(n<=1) return false;
    if(n==2) return true;
    if(n%2==0) return false;
    for(long long i=3;i*i<=n;i+=2){
        if(n%i==0) return false;
    }
    return true;
}

vector<ll>precomputeprimes(ll maxval){
    vector<ll>precompute(maxval+1,0);
    ll sum=0;
    for(int i=2; i<=maxval; i++){
        if(isprime(i)){
            sum+=i;
        }
        precompute[i]=sum;
    }

    return precompute;
}

void solve(vector<ll> &v){
    ll ans=0;
    int k; cin>>k;

    if(isprime(k)){
        ans=k*v[k];
    }else{
        if(k%2==0){
            ans=2*k;
        }
        else{
            int p=0;
            for(p=3; p*p<=k; p+=2){
                if(k%p==0) break;
            }
            ans=k*v[p];
        }
    }
    cout<<ans<<'\n';

}


int main() {
    int t=1; 
    cin >> t;

    vector <ll> v = precomputeprimes(1000000);

    while(t--){
        solve(v);
    }

    return 0;
}

// Upsovle
    /*
        Here, what is the catch is that we divide our solution if k is prime or not.
        If it is prime then, the numbers for which it will be the 2nd largest divisor will be multiplication of 
        k and all those prime no <=k. 
        ie, sum would be k*(sum of all prime no <=k)

        Now if k is not prime then, we will find the smallest prime no 'p' of k, and then multiply all those prime no
        which are <=p to get the nos whose second largest divisor is k.

        The reason why we are multiplying by prime nos in both the cases where 'k' is prime/composite is that,
        if it is composite then it can be broken down into prime nos and rearranged to get a bigger no that would 
        result same N and 'k' would no longer be 2nd largest divisor.
    */