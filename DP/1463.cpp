#include <bits/stdc++.h>
#define MAX 10000001

using namespace std;

int n;
int dp[MAX];

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    dp[0] = 0;
    dp[1] = 0;

    cin >> n;

    for(int i = 2; i <= n; i++){
        dp[i] = dp[i - 1] + 1;
        if((i % 2 == 0) && (dp[i] > dp[i/2] + 1))
            dp[i] = dp[i/2] + 1;
        if((i % 3 == 0) && (dp[i] > dp[i/3] + 1))
            dp[i] = dp[i/3] + 1;
        
    }

    cout << dp[n];

    return 0;
}