#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n; cin>>n;

    /*
        First, we dont require an array to store the numbers, we can simply print the pattern.

        Now, as we need to max the dist btw 2 permutation and the dist btw 2 permutations is defined as the 
        min of the differences between individual elements.

        So in order to achieve this, we will try to keep the diff btw elements as max as possible.

        With observation we can find that, if we write the 1st permutation as 1,2,3....N and second as 
        ceil(N/2), ....N,12,3,4..... we can maximize the individual diff btw the elements, hence can maximize 
        the dist btw 2 permutations.
        ie, we are just shifting the 2nd permutation by N/2 elements to the right.
        eg: 
        N=10 (even)
            1 2 3 4 5 6 7 8 9 10
            6 7 8 9 10 1 2 3 4 5

        N=9 (odd)
            1 2 3 4 5 6 7 8 9
            5 6 7 8 9 1 2 3 4

    */

    for(int i=1; i<=n; i++){
        cout<<i<<" ";
    }

    cout<<endl;

    for(int i=1; i<=n; i++){
        int a= i + (n/2);
        if(a>n){
            a=i-ceil(n/2.0);
        }
        cout<<a<<" ";
    }

    cout<<endl;
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