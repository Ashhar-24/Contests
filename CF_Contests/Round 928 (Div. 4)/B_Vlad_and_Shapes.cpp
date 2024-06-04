#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        char arr[n][n];
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                cin>>arr[i][j];
            }
        }

        vector <int> count1;

        for(int i=0; i<n; i++){
            int count=0;
            for(int j=0; j<n; j++){
                if(arr[i][j]=='1') count++;
            }
            count1.push_back(count);
        }

        // for(int i=0 ;i<n; i++) cout<<count1[i]<<" ";

        bool sq=0, tr=0;

        for(int i=0; i<n-1; i++){
            if(count1[i]!=0 and count1[i]==count1[i+1]) {
                sq=1;
                break;
            }
            else if(count1[i]!=0 and abs(count1[i+1]-count1[i])==2) {
                tr=1; 
                break;
            }
        }

        if (sq==1) cout<<"SQUARE"<<'\n';
        else if (tr==1) cout<<"TRIANGLE"<<'\n';
    }

}