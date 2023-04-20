#include <bits/stdc++.h>

using namespace std;

int dp[31][2]; //31 : D의 범위, 2 : x와 y의 계수를 저장 (0: x, 1: y)

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int d, k;
    cin >> d >> k;

    dp[1][0] = 1;
    dp[1][1] = 0;
    //첫째날 x의 계수는 1, y의 계수는 0
    dp[2][0] = 0;
    dp[2][1] = 1;
    //둘째날 x의 계수는 0, y의 계수는 1

    //3번째 날 부터 x와 y의 계수
    // 2번째 날 x 계수 + 1번째 날 x 계수 
    // 2번째 날 y 계수 + 2번째 날 y 계수

    for(int i = 3; i <= d; i++) {
        dp[i][0] = dp[i - 2][0] + dp[i - 1][0];
        dp[i][1] = dp[i - 2][1] + dp[i - 1][1];
    }

    for(int i = 1; i <= k; i++) {
        int tmp = k - (dp[d][0] * i);

        if(tmp % dp[d][1] == 0) {
            cout << i << "\n" <<  tmp / dp[d][1] << "\n";
            return 0;
        }
    }

    return 0;
}