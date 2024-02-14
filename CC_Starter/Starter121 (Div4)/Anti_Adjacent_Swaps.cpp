#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];

        /*
            Logic=> If n>=4, it is always possible to sot it. For n==1, always sorted. n==2 if first is smaller, YES else NO.
            For n==3, if increasing/ decreasing, YES else NO.
        */

        if(n==1){
            cout<<"YES"<<'\n';
        }

        else if(n==2){
            if(arr[0]>arr[1]){
                cout<<"NO"<<'\n';
            }
            else{
                cout<<"YES"<<'\n';
            }
        }

        else if(n==3){
            bool check=0;

            if((arr[0]>=arr[1]) && (arr[1]>=arr[2])) check =1;     // increasing

            else if((arr[0]<=arr[1])&& arr[1]<=arr[2]) check=1;     // decreasing

            if(check==1) cout<<"YES"<<'\n';
            else cout<<"NO"<<'\n';

        }

        else{
            cout<<"YES"<<'\n';
        }
    }
}
