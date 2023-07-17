#include<bits/stdc++.h>

using namespace std;

int t;
int dp[31][31];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> t;

    while(t--) {
        int n, m;
        cin >> n >> m;

        for(int i = 1; i <= m; i++) {
            dp[1][i] = i;
        }

        for(int i = 2; i <= n; i++) {
            for(int j = i; j <= m; j++) {
                dp[i][j] = dp[i][j - 1] + dp[i - 1][j - 1];
            }
        }

        cout << dp[n][m] << "\n";
    }

    return 0;
}
