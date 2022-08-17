#include <bits/stdc++.h>
#define MAX 41

using namespace std;

int dp[MAX][2];

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t; //test case
    cin >> t;

    dp[0][0] = 1; dp[0][1] = 0;
    dp[1][0] = 0; dp[1][1] = 1;

    while(t--){
        int n;
        cin >> n;

        
        for(int i = 2; i <= n; i++){
            dp[i][0] = dp[i-1][0] + dp[i-2][0];
            dp[i][1] = dp[i-1][1] + dp[i-2][1];
        }

        cout << dp[n][0] << " " << dp[n][1] << '\n';
    }

    return 0;
}