#include<bits/stdc++.h>
#define res 1000000007

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;

    for(int i = 1; i <= t; i++) {
        int c, v, l;
        int dp[16][2];

        for(int j = 1; j <= 16; j++) {
            for(int k = 0; k < 2; k++) {
                dp[j][k] = 0;
            }
        }

        cin >> c >> v >> l;

        dp[1][0] = v;
        dp[1][1] = 0;

        for(int j = 2; j <= l; j++) {
            dp[j][0] = (dp[j - 1][0] * v) + (dp[j - 1][1] * v) % res;
            dp[j][1] = c * dp[j - 1][0] % res;
        }

        cout << "Case #" << i << ": " << (dp[l][0] + dp[l][1]) % res << "\n";
    }

    return 0;
}
