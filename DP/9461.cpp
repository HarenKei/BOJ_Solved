#include <bits/stdc++.h>
#define MAX 101

using namespace std;

int t; // test case
long long dp[MAX];

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    dp[1] = 1;
    dp[2] = 1;
    dp[3] = 1;
    dp[4] = 2;
    dp[5] = 2;

    cin >> t;

    while(t--){
        int n;
        cin >> n;
        
        for(int i = 6; i <= n; i++){
            dp[i] = dp[i-1] + dp[i-5];
        }
        cout << dp[n] << '\n';
    }


    return 0;
}