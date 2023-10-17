#include <bits/stdc++.h>
#define MAX 36

using namespace std;

int n;
long long dp[MAX];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> n;

    dp[0] = 1;

    for(int i = 1; i <= n; i++) {
        for(int j = 0; j < i; j++) {
            dp[i] += (dp[j] * dp[i - (j + 1)]);
        }
    }

    cout << dp[n] << "\n";


    return 0;
}
