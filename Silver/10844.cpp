#include <bits/stdc++.h>

using namespace std;

int n;
int dp[101][10]; //[길이][앞에 올 수 있는 수]
int result;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n;
    int dp[101][10] = {0,};

    cin >> n;

    for(int i = 1; i < 10; i++){
        dp[1][i] = 1;
    }

    for(int i = 2; i <= n; i++){
        for(int j = 0; j < 10; j++){
            if(j == 0){
                dp[i][j] += dp[i - 1][1];
            } else if(j == 9){
                dp[i][j] = dp[i - 1][8];
            } else{
                dp[i][j] += dp[i - 1][j + 1];
                dp[i][j] += dp[i - 1][j - 1];
            }
            dp[i][j] %= 1000000000;
        }
    }

    for(int i = 0; i < 10; i++){
        result += dp[n][i];
        result %= 1000000000;
    }

    cout << result << "\n";

    return 0;
}