#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n; cin>>n;
    string s; cin>>s;
    if (n==1){
        cout<<"Bob"<<'\n';
        return;
    } 
    int zero=0, one=0;
    for(char c: s){
        if(c=='1') one++;
        else zero++;
    }

    int dif= abs(zero-one);
    if(n%2==0){
        if(dif>=2) cout<<"Alice"<<'\n';
        else cout<<"Bob"<<'\n';
    }
    else{
         if(dif>=2) cout<<"Bob"<<'\n';
        else cout<<"Alice"<<'\n';
    }
    

}	


int main() {
    int t=1; 
    cin >> t;
    while(t--){
        solve();
    }

    return 0;
}

/*
    Upsolved:
        Game will stop when either of 4 conditions are reached:
            0
            1
            10
            01
        Else in all other cases, cyclic palindromic string is always possible.

    So now, when 'n' is even, after playing (n/2 -1) chances by both the players, 2 chars will be left and
    Alice would be playing.
    For Alice to win at this moment, he needs to have either 00 or 11. And for Bob to win, the characters
    left needs to be 10 or 01. So for predicting this, we count the no of zeroes and ones in the string.
    Now if difference in them is >=2 then Alice will be able to get 00/11 at the end. And  if the difference is
    less than 2, Bob will win as at the end either 01 or 10 will appear.

    For 'n' odd, when 2 chars would be left, Bob will have it's chance to play. So now Bob will want to have
    11/00 at the end, ie above situation is now reveresed.

*/ 