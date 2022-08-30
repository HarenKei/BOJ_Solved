#include <bits/stdc++.h>
#define MAX 1000001

using namespace std;

long long dp[MAX];
int t;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    dp[1] = 1;
    dp[2] = 2;
    dp[3] = 4;
    dp[4] = 7;
    dp[5] = 13;

    cin >> t;

    while(t--){
        long long num;
        cin >> num;

        for(long long i = 6; i <= num; i++){
            dp[i] = (dp[i - 1] + dp[i - 2] + dp[i - 3]) % 1000000009;
        }

        cout << dp[num] << '\n';
    }

    return 0;
}