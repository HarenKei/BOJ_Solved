#include <bits/stdc++.h>
#define MAX 301

using namespace std;

int n;
int dp[MAX];
int score[MAX];

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n;

    score[0] = 0;
    for(int i = 1; i <= n; i++){
        cin >> score[i];
    }
    //dp[0] = 0;
    dp[1] = score[1];
    dp[2] = score[1] + score[2];
    //여기까지는 두 값을 비교하지 않아도 괜찮다.

    for(int i = 3; i <= n; i++){
        dp[i] = max(dp[i - 2] + score[i], dp[i-3] + score[i-1] + score[i]);
    }

    cout << dp[n];

    return 0;


}