#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        vector <int> v(n);
        for(int i=0; i<n; i++) cin>>v[i];

        set <string> ans;
        
        for(int i=0;i <n; i++){
            vector <int> binaryNum(32,0);
            int n= v[i], j=0;
            while (n > 0) { 
        
                // storing remainder in binary array 
                binaryNum[j] = n % 2; 
                n = n / 2; 
                j++; 
            }

            reverse(binaryNum.begin(), binaryNum.end());

            string input = "";
            for (int k = 0; k < 32; k++) {
            input += to_string(binaryNum[k]);
        }

            ans.insert(input);
        } 
        cout<<ans.size()<<'\n';
    }
}