#include <bits/stdc++.h>
#define MAX 501

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    int dp[501][501];
    int arr[501][501];

    cin >> n;

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++){
            cin >> arr[i][j];
        }
    }

    dp[1][1] = arr[1][1];

    for(int i = 2; i <= n; i++){
        for(int j = 1; j <= i; j++){
            dp[i][j] = max(dp[i-1][j-1], dp[i-1][j]) + arr[i][j];
        }
    }

    int maxSum = 0;
    for(int i = 1; i <= n; i++){
        if(dp[n][i] > maxSum) {
            maxSum = dp[n][i];
        }
    }

    cout << maxSum << "\n";

    return 0;
}