#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n,k; cin>>n>>k;
    vector<int>arr(n);
    vector<int>h(n);
    for(auto &x: arr)cin>>x;
    for(auto &x: h) cin>>x;

    /*
        We calculate a prefix sum for the health and comapre it with the position, because at any position 
        it is impossible to kill a monster which has larger prefix sum of health than the position.
    */

    int index=-1, pre=0;
    for(int i=0; i<n; i++){
        if(pre+h[i]>arr[i]){
            index=i;                    // storing the first index where it is not possible to kill the monster
            break;
        }
        pre+=h[i];
   }

    if(index==-1){                     // If there's no need to use bomb, we simply print YES
        cout<<"YES\n";
        return;
    }

    /*
        Now we know that monster at 'index' needs to be killed by bomb. And as the range of bomb is 2k, we have
        to place the bomb such that 'index' is covered. So we move towards right a distance of 2k from index,
        and find the index where dist becomes greater than 2k. 
        (The reason is that it is not optimal to place
        bomb at index as the `monsters` towards left of 'index' can be killed without bomb also. So to use it
        optimally we must place after 'index')

        Now from that index we move 2k distance backwards (and not till 'index') because monsters are not present
        at every point, it might be also that from 'right' to 'index' the dist is <2k and we can further move
        towards left. Therefore we move a distance of 2k from 'right'.
    
    */ 
    

    int right=n-1;                    
    for(int i=index; i<n; i++){
        if(arr[i]-arr[index]>2*k){
            right= i-1;
            break;
        }
    }

    for(int i=right; i>=0; i--){
        if(arr[right]-arr[i]>2*k){
            break;
        }
        h[i]=0;
    }

    // Again chechking that after using bomb, is it possible to kill all monsters

    pre=0;

    for(int i=0; i<n; i++){
        if(pre+h[i]>arr[i]){
            cout<<"NO\n";
            return;
        }
        pre+=h[i];
    }
    
    cout<<"YES\n";
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