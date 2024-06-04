#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n; cin>>n;
    // 1 3 6 10 15
    
    int coins=0;
    if(n==1 or n==3 or n==6 or n==10 or n==15) coins=1;
    else if (n>1 and n<3) coins=n;
    else if(n>3 and n<6) coins= 1 + (n-3);
    else if(n>6 and n<10){
        if(n==9) coins=2;
        else coins= 1 + (n-6);
    }
    else if(n>10 and n<15){
        if(n==11) coins=2;
        else if(n==12) coins=2;
        else if(n==13) coins=2;
        else if(n==14) coins=3;
    }

    else if (n>15){
        int coins15=n/15;
        int x= n%15;
        if(x==1 or x==3 or x==6 or x==10) coins15+=1;
        else if (x>1 and x<3) coins15+=x;
        else if(x>3 and x<6) coins15+= (1 + (x-3));
        else if(x>6 and x<10){
            if(x==9) coins15+=2;
            else coins15+= (1 + (x-6));
        }
        else if(x>10 and x<15){
            if(x==11) coins15+=2;
            else if(x==12) coins15+=2;
            else if(x==13) coins15+=2;
            else if(x==14) coins15+=3;
        }

        int coins10=n/10;
        int r10= n%10;
        if(r10==1 or r10==3 or r10==6 or r10==10) coins10+=1;
        else if (r10>1 and r10<3) coins10+=r10;
        else if(r10>3 and r10<6) coins10+= (1 + (r10-3));
        else if(r10>6 and r10<10){
            if(r10==9) coins10+=2;
            else coins10+= (1 + (r10-6));
        }

        
    } 

    cout<<coins<<endl;
}	


int main() {
    int t=1; 
    cin >> t;
    while(t--){
        solve();
    }

    return 0;
}