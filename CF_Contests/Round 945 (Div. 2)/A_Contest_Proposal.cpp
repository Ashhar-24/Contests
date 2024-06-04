#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n; cin>>n;
    vector<int>arr(n);
    vector<int>brr(n);

    for(int i=0; i<n; i++)cin>>arr[i];
    for(int i=0; i<n; i++)cin>>brr[i];

    int i=0, j=0, ct=0, temp=n;
    while(i<n and j<n and temp>0){
        if(arr[i]>brr[j]){
            ct++;
            j++;
            temp--;
        }

        else if(arr[i]<=brr[j]){
            i++;
            j++;
            temp--;
        }
    }
    cout<<ct<<'\n';
}	


int main() {
    int t=1;
    cin >> t;
    while(t--){
        solve();
    }

    return 0;
}

// Round 942 A
/*
    Implementation*
*/