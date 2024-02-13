#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        /*
            Approach (up-solve):
            Set all letters as 'a' and decrease the vaalue of n by 3.
            Traverse from ans[2] ie last element and increase until either it reaches 'z' or n==0. When it reaches 'z' and n!=0 do it for ans[1] and so on till arr[0].  
        */

        char ans[3];
        for(int i=0; i<3; i++){
            ans[i]='a';
        }

        n-=3;

        for(int i=2; i>=0 && n>0; i--){
            while(ans[i]!='z' && n>0){
                n--;
                ans[i]++;
            }
        }

        // string ans;

        // int q = n / 26;
        // int r = n % 26;

        // if (q > 0 && n != 26)
        // {
        //     for (int i = 0; i < q; i++)
        //     {
        //         ans.append("z");
        //     }
        // }

        // if (q > 0 && n != 26)
        // {
        //     for (int i = 0; i < q; i++)
        //     {
        //         ans[2 - i] = 'z';
        //     }

        //     if (3 - q == 1)
        //         ans[0] = 'a' + r - 1;
        //     else if (3 - q == 2)
        //     {
        //         ans[0] = 'a';
        //         ans[1] = 'a' + r - 2;
        //     }
        // }

        // else
        // {

        //     for (int i = 0; i < 2; i++)
        //     {
        //         ans[i] = 'a';
        //     }

        //     ans[2] = 'a' + r - 3;
        // }

        // printing
        for (int i = 0; i < 3; i++)
        {
            cout << ans[i];
        }

        cout << '\n';
    }
}