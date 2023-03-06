#include <bits/stdc++.h>

using namespace std;

int t;
long long dp[65][10];

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    
    
    for(int i = 0; i <= 9; i++){
        dp[1][i] = 1;
    }

    for(int i = 1; i <= 64; i++){
        for(int j = 0; j <= 9; j++){
            for(int k = j; k <= 9; k++){
                dp[i][j] += dp[i - 1][k];
            }
        }
    }

    cin >> t;

    while(t--){
        int n;
        long long ans = 0;
        cin >> n;


        for(int i = 0; i <= 9; i++){
            ans += dp[n][i];
        }

        cout << ans << "\n";
    }


    
    return 0;
}