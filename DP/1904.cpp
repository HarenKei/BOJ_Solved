#include <bits/stdc++.h>
#define MAX 1000001

using namespace std;

int n;
long dp[MAX];

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n;

    dp[0] = 0;
    dp[1] = 1;
    dp[2] = 2;

    for(int i = 3; i <= n; i++){
        dp[i] = (dp[i - 1] + dp[i - 2]) % 15746;
    }

    cout << dp[n] << '\n';

    return 0;
}