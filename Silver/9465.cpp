#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    int dp[2][100001];
    cin >> t;

    while(t--) {
        memset(dp, 0, size(dp));
        int n;
        cin >> n;

        int stc[2][100001];

        for(int i = 0; i < 2; i++) {
            for(int j = 0; j < n; j++){
                cin >> stc[i][j];
            }
        }

        dp[0][0] = stc[0][0];
        dp[1][0] = stc[1][0];
        dp[0][1] = stc[0][1] + dp[1][0];
        dp[1][1] = stc[1][1] + dp[0][0];

        for(int i = 2; i < n; i++) {
            dp[0][i] = stc[0][i] + max(dp[1][i - 1], dp[1][i - 2]);
            dp[1][i] = stc[1][i] + max(dp[0][i - 1], dp[0][i - 2]);
        }

        cout << max(dp[0][n-1], dp[1][n-1]) << "\n";
    }

    return 0;
}
