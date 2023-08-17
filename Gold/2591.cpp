#include<bits/stdc++.h>

using namespace std;

int dp[41];
string str;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> str;

    int ans = str.length();

    dp[0] = 1;
    dp[1] = 1;

    for(int i = 2; i <= ans; i++) {
        if(str[i - 1] != '0') {
            dp[i] = dp[i - 1];
        }

        if(((str[i - 2] - '0') * 10) + (str[i - 1] - '0') <= 34 && str[i - 2] != '0') {
            dp[i] += dp[i - 2];
        }
    }

    cout << dp[ans] << "\n";



    return 0;
}
