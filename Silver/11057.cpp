#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    int result = 0;
    int dp[1001][10] = {0, };

    cin >> n;

    for(int i = 0; i < 10; i++){
        dp[1][i] = 1;
    }

    for(int i = 2; i <= n; i++){
        for(int j = 0; j < 10; j++){
            for(int k = 0; k <= j; k++){
                dp[i][j] = dp[i][j] + dp[i - 1][k];
                dp[i][j] %= 10007;
            }
            
        }
    }


    for(int i = 0; i < 10; i++){
        result += dp[n][i];
        result %= 10007;
    }

    cout << result << "\n";

    return 0;
}