#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n,m; cin>>n>>m;
    int a[n][m];
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>a[i][j];
        }
    }

    if(n==1){
        for(int i=0; i<m; i++){
            if(i==0){
                int maxi=a[0][i+1];
                if(maxi<a[0][i]){
                    a[0][i]=maxi;
                }
            }
            else if(i==m-1){
                int maxi=a[0][i-1];
                if(maxi<a[0][i]){
                    a[0][i]=maxi;
                }
            }
            else{
                int maxi=max(a[0][i-1], a[0][i+1]);
                if(maxi<a[0][i]){
                    a[0][i]=maxi;
                }
            }
        }
    }

    else if(m==1){
        for(int i=0; i<n; i++){
            if(i==0){
                int maxi=a[i+1][0];
                if(maxi<a[i][0]){
                    a[i][0]=maxi;
                }
            }
            else if(i==n-1){
                int maxi=a[i-1][0];
                if(maxi<a[i][0]){
                    a[i][0]=maxi;
                }
            }
            else{
                int maxi=max(a[i-1][0], a[i+1][0]);
                if(maxi<a[i][0]){
                    a[i][0]=maxi;
                }
            }
        }
    }

    else{


    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(i==0){
                if(j==0){
                    int maxi=max(a[i][j+1], a[i+1][j]);
                    if(maxi<a[i][j]){
                        a[i][j]=maxi;
                    }
                }
                else if(j==m-1){
                    int maxi=max(a[i][j-1], a[i+1][j]);
                    if(maxi<a[i][j]){
                        a[i][j]=maxi;
                    }
                }
                else{
                    int maxi=max(a[i][j-1], a[i][j+1]);
                    maxi=max(maxi, a[i+1][j]);
                    if(maxi<a[i][j]){
                        a[i][j]=maxi;
                    }
                }
            }
            else if(i==n-1){
                if(j==0){
                    int maxi=max(a[i][j+1], a[i-1][j]);
                    if(maxi<a[i][j]){
                        a[i][j]=maxi;
                    }
                }
                else if(j==m-1){
                    int maxi=max(a[i][j-1], a[i-1][j]);
                    if(maxi<a[i][j]){
                        a[i][j]=maxi;
                    }
                }
                else{
                    int maxi=max(a[i][j-1], a[i][j+1]);
                    maxi=max(maxi, a[i-1][j]);
                    if(maxi<a[i][j]){
                        a[i][j]=maxi;
                    }
                }
            }
            else if(j==0){
                int maxi=max(a[i][j+1], a[i-1][j]);
                maxi=max(maxi, a[i+1][j]);
                if(maxi<a[i][j]){
                    a[i][j]=maxi;
                }
            }
            else if(j==m-1){
                int maxi=max(a[i][j-1], a[i-1][j]);
                maxi=max(maxi, a[i+1][j]);
                if(maxi<a[i][j]){
                    a[i][j]=maxi;
                }
            }
            else{
                int maxi=max(a[i][j-1], a[i][j+1]);
                maxi=max(maxi, a[i-1][j]);
                maxi=max(maxi, a[i+1][j]);
                if(maxi<a[i][j]){
                    a[i][j]=maxi;
                }
            
            }
        }
    }

    }


    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
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

// The code is only implementation of the question. 