#include <bits/stdc++.h>
#define MAX 100001

using namespace std;

int n;
int dp[MAX];

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    cin >> n;

    for(int i = 1; i <= n; i++){
        dp[i] = i;
    }

    for(int i = 2; i <= n; i++){
        for(int j = 2; j*j <= i; j++){
            dp[i] = min(dp[i], dp[i-j*j] + 1);
        }
    }

    cout << dp[n] << '\n';

    return 0;
}