#include <bits/stdc++.h>
using namespace std;

void solve(){
    int arr [22][2];
    for(int i=0; i<22; i++){
        for(int j=0; j<2; j++){
            cin>>arr[i][j];
        }
    }

    int ans=INT_MIN, index=-1;
    for(int i=0; i<22; i++){
        int score= arr[i][0] + (20*arr[i][1]);
        ans=max(ans,score);
        if(ans==score) index=i;
        
    }

    cout<<index+1<<'\n';

}	


int main() {
    int t=1; 
    cin >> t;
    while(t--){
        solve();
    }

    return 0;
}