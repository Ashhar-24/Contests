#include <bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;

void findcnt(){
    ll ecnt, cnncnt, target;
    cin >> ecnt >> cnncnt;
    vector<int> cnns[ecnt];

    for(int i = 0; i < cnncnt; i++){
        int emp1, emp2;
        cin >> emp1 >> emp2;
        cnns[emp1].pb(emp2);
        cnns[emp2].pb(emp1);
    }

    cin >> target;

    set<int> ow, hw, ndo, ndh;
    for(int i = 0; i < ecnt; i++) ow.insert(i);
    
    int days = 0;
    while(target > 0){
        target -= ow.size();


        for(auto employee : ow){
            int friendsPresent = 0;
            for(auto friend_id : cnns[employee]){
                if(ow.count(friend_id)) friendsPresent++;
            }
            if(friendsPresent == 3) ndo.insert(employee);
            else ndh.insert(employee);
        }


        for(auto employee : hw){
            int friendsPresent = 0;
            for(auto friend_id : cnns[employee]){
                if(ow.count(friend_id)) friendsPresent++;
            }
            if(friendsPresent < 3) ndo.insert(employee);
            else ndh.insert(employee);
        }

        ow = ndo;
        hw = ndh;

        ndo.clear();
        ndh.clear();

        days++;
    }

    cout << days;
}

int main(){
    int testCases = 1;
    while(testCases--){
        findcnt();
    }
    return 0;
}