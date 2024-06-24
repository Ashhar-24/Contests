#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n,m; cin>>n>>m;
    string s; cin>>s;
    vector<int>v(m);
    for(int i=0; i<m; i++){
        cin>>v[i];
    }
    string c; cin>>c;

    // Case1: Sorting the given array and replacing the elements at indices given in the array
    vector<int>copy=v;
    sort(copy.begin(), copy.end());
    string s1=s;
    for(int i=0; i<m; i++){
        s1[copy[i]-1]=c[i];
    }


    // Case2: Sorting the string c and replacing at given indices 
    string c_copy=c;
    sort(c_copy.begin(), c_copy.end());
    string s2=s;
    for(int i=0; i<m; i++){
        s2[v[i]-1]=c_copy[i];
    }

    // Case3: Sorting both the string and the array and replacing at given indices
    string s3=s;
    // Using c_copy and copy from Case2 and Case1
    for(int i=0; i<m; i++){
        s3[copy[i]-1]=c_copy[i];
    }

    // Case4: Not changing anything, applying changes in the order of the array
    string s4=s;
    for(int i=0; i<m; i++){
        s4[v[i]-1]=c[i];
    }

    cout<<s1<<" "<<s2<<" "<<s3<<" "<<s4<<" ";
    // string ans= min(s1, min(s2, s3));

    // cout<<ans<<endl;



}	


int main() {
    int t=1; 
    cin >> t;
    while(t--){
        solve();
    }

    return 0;
}