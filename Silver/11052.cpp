#include<bits/stdc++.h>

using namespace std;

int n;
int p[1001];
int dp[1001];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> n;

    for(int i = 1; i <= n; i++) {
        cin >> p[i];
    }

    dp[1] = p[1];

    for(int i = 2; i <= n; i++) {
        for(int j = 1; j <= i; j++) {
            dp[i] = max(dp[i], dp[i - j] + p[j]);
        }

    }

    cout << dp[n] << "\n";


    return 0;
}
