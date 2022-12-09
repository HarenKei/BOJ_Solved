#include <bits/stdc++.h>

using namespace std;

long long dp[82];
int n;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n;

    dp[0] = 0;
    dp[1] = 4;
    dp[2] = 6;

    for(int i = 3; i <= n; i++){
        dp[i] = dp[i-2] + dp[i-1];
    }

    cout << dp[n] << '\n';

    return 0;
}