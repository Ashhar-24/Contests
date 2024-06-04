#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    char arr[5];
    for(int i=0; i<5; i++)cin>>arr[i];
    string ans;

    int hour= (arr[0]-'0')*10 + (arr[1]-'0');
    if(hour>0 and hour<12){
        for(int i=0; i<5; i++) ans.push_back(arr[i]);
        ans+=" AM";

    }
    else if(hour==0 or hour==12){
        ans+="12:";
        for(int i=3; i<5; i++) ans.push_back(arr[i]);
        (hour==0)?ans+=" AM": ans+=" PM";
    }
    else if(hour>12 and hour<24){

        hour= hour%12;
        if(hour<10){
            ans+='0';
            ans+=(hour+'0');
        }
        else ans+=to_string(hour);
        ans+=':';
        for(int i=3; i<5; i++) ans.push_back(arr[i]);
        ans+=" PM";
    }
    cout<<ans<<'\n';
}	


int main() {
    int t=1; 
    cin >> t;
    while(t--){
        solve();
    }

    return 0;
}