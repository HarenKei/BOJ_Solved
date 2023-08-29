#include<bits/stdc++.h>

using namespace std;

string s1, s2;
int dp[1001][1001];
int maxLen = 0;
string ans = "";

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> s1 >> s2;

    for(int i = 1; i <= s1.length(); i++) {
        for(int j = 1; j <= s2.length(); j++) {
            if(s1[i - 1] == s2[j - 1]) {
                dp[i][j] = dp[i - 1][j - 1] + 1;
            } else {
                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
            }
        }
    }

    maxLen = dp[s1.length()][s2.length()];

    cout << maxLen << "\n";

    int tmp = s2.length();
    for(int i = s1.length(); i >= 1; i--) {
        for(int j = tmp; j >= 1; j--) {
            if(dp[i][j] == dp[i - 1][j]) {
                tmp = j;
                break;
            } else if(dp[i][j] == dp[i][j - 1]) {
                continue;
            } else {
                ans.push_back(s1[i - 1]);
            }
        }
    }

    reverse(ans.begin(), ans.end());


    cout << ans << "\n";

    return 0;
}
