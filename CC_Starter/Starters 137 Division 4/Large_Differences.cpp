#include <bits/stdc++.h>
#define ll long long
using namespace std;

int sumof(vector<int> &temp){
    int sum=0;
    for(int i=1; i<temp.size(); i++){
        sum+= abs(temp[i]-temp[i-1]);
    }
    
    return sum;
}

void solve(){
    int n,k; cin>>n>>k;
    vector<int> v(n);
    for(auto &x: v) cin>>x;
        
    int orgsum= sumof(v);
        
    int maxof1=0;
    // vector<int>temp;
    for(int i=0; i<n; i++){
        vector<int>temp= v;
        temp[i]=1;
        int sum= sumof(temp);
        maxof1=max(maxof1, sum);
    }
        
    int maxofk=0;
    for(int i=0; i<n; i++){
        vector<int>temp= v;
        temp[i]=k;
        int sum= sumof(temp);
        maxofk=max(maxofk, sum);
    }
        
    int ans=max(orgsum, max(maxof1, maxofk));
    cout<<ans<<'\n';

    // int n,k; cin>>n>>k;
    // vector<int>arr(n);
    // for(int i=0; i<n; i++) cin>>arr[i];

    // vector<int> copy = arr;
    // sort(copy. begin(), copy.end());

    // int minele= copy[0];

    // int index=-1;
    // for(int i=0; i<n; i++){
    //     if(arr[i]==minele){
    //         index=i;
    //         break;
    //     }
    // }

    // int sum=0, val, temp1, temp2;
    // if(n>2){
    //     if(index!=0 and index!=n-1){
    //         val= abs(arr[index]-arr[index-1])+abs(arr[index]-arr[index+1]);
    //         temp1= abs(k-arr[index-1])+abs(k-arr[index+1]);
    //         temp2= abs(1-arr[index-1])+abs(1-arr[index+1]);
    //     }
    //     else if(index==0){
    //         val= abs(arr[index]-arr[index+1]);
    //         temp1= abs(k-arr[index+1]);
    //         temp2= abs(1-arr[index+1]);
    //     }
    //     else if(index==n-1){
    //         val= abs(arr[index]-arr[index-1]);
    //         temp1= abs(k-arr[index-1]);
    //         temp2= abs(1-arr[index-1]);
    //     }


    //     int repval=0;
    //     if(temp1>val) repval=k;
    //     else if(temp2>val) repval=1;
    //     else repval=arr[index];

    //     for(int i=0; i<n; i++){
    //         if(i==index){
    //             arr[i]=repval;
    //         }
    //     }


    //     for(int i=0; i<n-1; i++){
    //         sum+= abs(arr[i]-arr[i+1]);
    //     }
    // }
    // else if(n==2){
    //     sort(arr.begin(), arr.end());
    //     int diff= abs(arr[0]-arr[1]);
    //     int t1= abs(1-arr[1]);
    //     int t2= abs(k-arr[1]);
    //     if(t1>diff)sum=t1;
    //     else if (t2>diff) sum=t2;
    //     else sum=diff;
    // }
    // else sum=arr[0];

    // cout<<sum<<'\n';
    
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
/*
    Mistakes:
        1. Didn't look at the constraints and directly went to solve in O(n) approach, while it could have 
            been done in O(n^2) also.
        2. When only 1 test case was passing, I didn't try to figure out that the logic that i was applying
            was only valid for the given test case and not in general for the entire problem.
        3. In original solution, the operation I was doing was on the smallest no in the array, while it should
            have been done on all the elements and then should be checked for max sum.
            ie, replace all the nos by first 1 and calculate the sum and take the max of it by replacing all by 1
            and similarly do it for 'k' as well. And the final answer would be max of sumof1, sumofk, orgsum.
*/