#include <bits/stdc++.h>
#define MAX 1001

int n;
long dp[MAX];


using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n;

    dp[0] = 0;
    dp[1] = 1;
    dp[2] = 3;

    for(int i = 3; i <= n; i++){
        dp[i] = (dp[i-1] + (dp[i-2]*2)) % 10007;
    }

    cout << dp[n];

    return 0;    
}
