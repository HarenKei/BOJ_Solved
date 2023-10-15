#include <bits/stdc++.h>

using namespace std;

int n;
double arr[10001];
double dp[10001];
double ans;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> n;

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
        dp[i] = arr[i];
    }

    ans = dp[0];

    for(int i = 1; i < n; i++) {
        if(dp[i] <= dp[i - 1] * dp[i]) {
            dp[i] = max(dp[i], dp[i - 1] * dp[i]);
        }
        ans = max(ans, dp[i]);
    }

    cout << fixed;
    cout.precision(3);
    cout << ans << "\n";

    return 0;
}
