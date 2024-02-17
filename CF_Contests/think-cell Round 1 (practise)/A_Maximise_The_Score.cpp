#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        vector <int> v(2*n);
        for(int i=0; i<2*n; i++) cin>>v[i];

        /*
            Approach=> As we have to report the maximum sum, hence we first sort the array.
            Then we traverse from end and take the min of the two no.s and add it to our ans. We keep traversing until
            we reach the begining of the array.
        */

        sort(v.begin(), v.end());

        int sum=0;
        for(int i=2*n-1; i>=0; i-=2) sum+=min(v[i], v[i-1]);

        cout<<sum<<'\n';
    }
}