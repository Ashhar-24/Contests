#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n; cin>>n;
    vector<int>arr(n);
    vector<int>p(n);
    for(auto &x: arr) cin>>x;
    for(auto &x: p) cin>>x;

    /*
        In order to activate all the balls, there are total 4 cases possible:
        Case 1: left---> <----right
            One ball from left starts to move and one ball from right. For activating all the balls, the difference
            in index of right and left should be <=1.
        
        Case 2: <----left right----->
            From a index in between one starts to move towards left and other towards right
        
        Case 3: right-----> (OR) right-----> right----->
        Case 4: <-------left (OR) <------left <-----left
            
        These are the 4 different cases in which we can activate all the balls using atmost 2 balls.
    */


    // Case 1:
    int left=0, right= n-1;             // Stores indices till where the balls have been activated
    // left---->
    for(int i=0; i<n-1; i++){
        int dif= arr[i+1]-arr[i];
        if(p[i]>=dif) left=i+1;
        else break;
    }
    // <----right
    for(int i= n-1; i>0; i--){
        int dif= arr[i]- arr[i-1];
        if(p[i]>=dif) right= i-1;
        else break;
    }
    if(right-left<=1){
        cout<<"YES\n";
        return;
    }


    // Case 2:
    left=0, right=n-1;
    // Finding that left ball which can activate all balls to its left
    for(int i=1; i<n; i++){
        int dif= arr[i]-arr[i-1];
        if(p[i]>=dif) left=i;
        else break;
    }
    // Finding that right ball which can activate all balls to its right
    for(int i=n-2; i>=0; i--){
        int dif= arr[i+1]-arr[i];
        if(p[i]>=dif) right=i;
        else break;
    }
    if(right - left <= 1){
        // cout<<right<<" "<<left;
        cout<<"YES\n";
        return;
    }

    // Case 3:
    int ct=0;           // To keep track of how many balls fall short in activating the next right ball
    for(int i=0; i<n-1; i++){
        int dif= arr[i+1]-arr[i];
        if(p[i]>=dif)continue;
        else ct++;
    }
    if(ct<=1){
        cout<<"YES\n";
        return;
    }

    // Case 4:
    ct=0;
    for(int i=n-1; i>0; i--){
        int dif= arr[i]-arr[i-1];
        if(p[i]>=dif)continue;
        else ct++;
    }
    if(ct<=1){
        cout<<"YES\n";
        return;
    }

    cout<<"NO\n";
}	


int main() {
    int t=1; 
    cin >> t;
    while(t--){
        solve();
    }

    return 0;
}

// Upsovle