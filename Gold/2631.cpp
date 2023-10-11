#include <bits/stdc++.h>

using namespace std;

int n, ans = 0;
int kids[201];
int dp[201];

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> n;

    for(int i = 1; i <= n; i++) {
        cin >> kids[i];
        dp[i] = 1;
    }


    //dp[i] => kids[i]를 마지막 수로 하는 LIS의 길이
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j < i; j++) {
            if(kids[j] < kids[i]) {
                //현재 어린이의 번호보다 이전 어린이의 번호가 작아야 부분 증가수열이 성립한다.
                //i번째 어린이를 마지막으로 하는 LIS의 길이, j번째 어린이를 마지막으로 하는 부분 증가수열의 길이 중 큰 값을 저장
                dp[i] = max(dp[i], dp[j] + 1);
            }
        }
        ans = max(ans, dp[i]);
    }

    cout << n - ans << "\n";

    return 0;
}
