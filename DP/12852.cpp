#include <bits/stdc++.h>
#define MAX 10000001

using namespace std;

int n;
int dp[MAX];
int ans[MAX];

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n;

    ans[1] = 1;
    dp[1] = 0;

    for(int i = 2; i <= n; i++){
        dp[i] = dp[i - 1] + 1;
        ans[i] = i - 1;

        if(i % 3 == 0){
            if(dp[i] > dp[i / 3] + 1){
                dp[i] = dp[i / 3] + 1;
                ans[i] = i / 3;
            }
        }

        if(i % 2 == 0){
            if(dp[i] > dp[i / 2] + 1){
                dp[i] = dp[i / 2] + 1;
                ans[i] = i / 2;
            }
        }
        
    }

    cout << dp[n] << '\n';

    if(n != 0) cout << n << " ";

    while(n != 1){
        n = ans[n];
        cout << n << " ";
    }


    return 0;
}