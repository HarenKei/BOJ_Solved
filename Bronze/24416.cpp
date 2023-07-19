#include<bits/stdc++.h>

using namespace std;

int n, reCnt = 1, dpCnt = 0;
int dp[41];

int fibo(int n) {
    if(n == 1 || n == 2) {
        return 1;
    } else {
        reCnt++;
        return(fibo(n - 1) + fibo(n - 2));
    }
}

void fibonacci(int n) {
    dp[1] = dp[2] = 1;

    for(int i = 3; i <= n; i++) {
        dpCnt++;
        dp[i] = dp[i - 1] + dp[i - 2];
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> n;

    fibo(n);
    fibonacci(n);

    cout << reCnt << " " << dpCnt << "\n";

    return 0;
}
