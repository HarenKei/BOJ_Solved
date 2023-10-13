#include <bits/stdc++.h>

using namespace std;

int n;
int dp[1001];

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> n;

    dp[1] = 0;
    dp[2] = 1;
    dp[3] = 0;
    dp[4] = 1;

    for(int i = 5; i <= n; i++) {
        if(min(dp[i - 1], min(dp[i - 3], dp[i - 4])) == 1) {
            dp[i] = 0;
        } else {
            dp[i] = 1;
        }
    }

    if(dp[n] == 1) {
        cout << "SK\n";
    } else {
        cout << "CY\n";
    }

    return 0;
}
