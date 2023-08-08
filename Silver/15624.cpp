#include <bits/stdc++.h>
#define MOD 1000000007

using namespace std;

int n;
long long dp[1000001];

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n;

    dp[1] = 1;

    for(int i = 2; i <= n; i++) {
        dp[i] = (dp[i - 1] + dp[i - 2]) % MOD;
    }

    cout << dp[n] % MOD << "\n";
 
    return 0;
}