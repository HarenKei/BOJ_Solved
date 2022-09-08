#include <bits/stdc++.h>
#define MAX 1001

using namespace std;

int dp[MAX][4]; //집 별 RGB 비용 1: R, 2: G, 3:B
int n;


int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    cin >> n;

    for(int i = 1; i <= n; i++){
        cin >> dp[i][1] >> dp[i][2] >> dp[i][3];
        
        dp[i][1] = min(dp[i-1][2], dp[i-1][3]) + dp[i][1];
        dp[i][2] = min(dp[i-1][1], dp[i-1][3]) + dp[i][2];
        dp[i][3] = min(dp[i-1][1], dp[i-1][2]) + dp[i][3];
    }

    cout << min(min(dp[n][1], dp[n][2]), dp[n][3]) << '\n';

    return 0;
}