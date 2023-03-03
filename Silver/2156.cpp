#include <bits/stdc++.h>
#define MAX 10001

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n; //포도주 잔의 개수
    int podo[MAX];
    int dp[MAX] = {0,};

    cin >> n;

    for(int i = 1; i <= n; i++){
        cin >> podo[i];
    }

    dp[1] = podo[1];
    dp[2] = podo[1] + podo[2];

    for(int i = 3; i <= n; i++){
        dp[i] = max(dp[i - 1], max(dp[i - 2] + podo[i], dp[i - 3] + podo[i - 1] + podo[i]));
    }

    cout << dp[n] << "\n";
    
    return 0;
}