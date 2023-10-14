#include <bits/stdc++.h>

using namespace std;

string s1, s2, s3;
int dp[101][101][101];
int maxLen = 0;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> s1 >> s2 >> s3;

    for(int i = 1; i <= s1.length(); i++) {
        for(int j = 1; j <= s2.length(); j++) {
            for(int k = 1; k <= s3.length(); k++) {
                if(s1[i - 1] == s2[j - 1] && s2[j - 1] == s3[k - 1]) {
                    dp[i][j][k] = dp[i - 1][j - 1][k - 1] + 1;
                } else {
                    dp[i][j][k] = max(dp[i - 1][j][k], max(dp[i][j - 1][k], dp[i][j][k - 1]));
                }
            }
        }
    }

    maxLen = dp[s1.length()][s2.length()][s3.length()];

    cout << maxLen << "\n";

    return 0;
}
