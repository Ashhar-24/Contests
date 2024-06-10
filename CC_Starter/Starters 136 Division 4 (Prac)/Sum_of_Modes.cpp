#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    ll n; cin>>n;
    string s; cin>>s;

    // The summation expression given is nothing but the sum of modes for all the possible substrings.

    /*
        For every substring, the mode would be either 1 or 2. So we just need to calculate the no of strings
        which has same no of 0 and 1. And add these no of substrings to total possible substrings 
        (as these would have 1 mode each).
    */

    ll ans= n* (n+1)/2;             // No of possible substrings, as all would be having mode 1
    
    /*
        Now we have to calculate the no of substrings which have equal no of 0's and 1's.
        An effective way to this is, by taking a subarray, making it's 0 to -1 and calculating it's sum.
        If the sum==0, means that it has equal no of 0's and 1's.
        ie, Effectively we have to find the no of subarray's having sum 0 after replacing 0's by -1's.

        To implement this, we take a map and calculate the prefix sum and increase it's count if it again appears.
        This would mean that in between there was a subarray whose sum was 0.
        Now we can do it directly on the given string, by encountering '1' we can add 1 to our prefix sum and
        decrement it by 1 elsewise.
    */

    map<int,int>mp;
    int pfsum=0;                // Keeps account of prefix sum
    mp[0]++;                   // Initially, sum would be 0

    for(auto x:s){
        if(x=='1') pfsum++;
        else pfsum--;

        ans+=mp[pfsum];     // If same prefix sum is found, increment the ans by ct of pfsum
        mp[pfsum]++;        // Increase the count of that sum by 1.
    }  

    cout<<ans<<'\n';
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