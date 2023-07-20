#include<bits/stdc++.h>

using namespace std;

int n;
int dp[11];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> n;

    dp[1] = 0;
    dp[2] = 1;

    for(int i = 3; i <= n; i++) {
        int tmp = i / 2;
        dp[i] = dp[tmp] + dp[i - tmp] + (tmp * (i - tmp));
    }

    cout << dp[n] << "\n";

    return 0;
}
