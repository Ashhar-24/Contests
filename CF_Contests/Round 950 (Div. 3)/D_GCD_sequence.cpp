#include <bits/stdc++.h>
#define ll long long
using namespace std;

bool check(vector<int>&arr, int index){
    vector<int>newarr;                      // creating a new arr to store elements except val at i==index
    for(int i=0; i<arr.size(); i++){
        if(i==index) continue;             
        else newarr.push_back(arr[i]);
    }

    int last=__gcd(newarr[0],newarr[1]);             // gcd of first 2 no.s
    for(int i=1; i<newarr.size()-1; i++){
        int y= __gcd(newarr[i], newarr[i+1]);
        if(y<last) return false;                    // previous gcd is greater than the present gcd, therefore condition fails
        else last=y;
    }
    return true;
}

void solve(){
    int n; cin>>n;
    vector<int>a(n);
    for(int i=0; i<n; i++)cin>>a[i];


    vector<int>b(n-1);          // Stores the initial gcd values
    for(int i=0; i<n-1; i++){
        b[i] = __gcd(a[i],a[i+1]);
    }

    int index=-1;

    // finding the index where the condition breaks
    for(int i=0; i<n-1; i++){
        if(b[i]>b[i+1]){
            index=i;
            break;
        }
    }

    if(index==-1)cout<<"YES\n";         // gcd is already in non decreasing order, so can remove last/first element
    else if(check(a, index) || check(a, index+1) || check(a, index+2)) cout<<"YES\n";   // Else, we remove the element at index and cal the gcd again
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