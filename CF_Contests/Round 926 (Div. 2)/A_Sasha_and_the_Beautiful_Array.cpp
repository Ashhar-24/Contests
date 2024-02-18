#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        vector <int> arr(n);

        for(int i=0; i<n; i++){
            cin>>arr[i];
        }

        sort(arr.begin(), arr.end());

        /*
        Optimisation: Instead of Summation (a[1]-a[0]+a[2]-a[1]+....+a[n-1]-a[n-2]) which eventaully boils down to a[n-1]-a[0] ie, can be done in O(logn)
        */


        int ans=0;

        for(int i=1; i<n; i++){
            ans+= arr[i]- arr[i-1];
        }

        cout<<ans<<'\n';

    }
}