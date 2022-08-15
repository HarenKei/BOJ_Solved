#include <bits/stdc++.h>
#define MAX 16

using namespace std;

int n;
int t[MAX];
int p[MAX];
int dp[MAX];
int result = -1;


int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> t[i] >> p[i];
    }

    for(int i = 0; i < n; i++){
        dp[i + 1] = max(dp[i], dp[i + 1]);
        dp[i + t[i]] = max(dp[i] + p[i], dp[i + t[i]]);
    }

    cout << dp[n];

    return 0;

}