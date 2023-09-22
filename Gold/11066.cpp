#include <bits/stdc++.h>
#define MAX 501
#define INF 987654321

using namespace std;

int t;
int sum[MAX], dp[MAX][MAX];


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> t;

    while(t--) {
        int k;
        memset(dp, 0, sizeof(dp));
        memset(sum, 0, sizeof(sum));
        cin >> k;

        for(int i = 1; i <= k; i++) {
            int input;
            cin >> input;
            sum[i] = sum[i - 1] + input;
        }

        for(int i = 1; i <= k; i++) {
            //파일을 합칠 범위

            for(int j = 1; j <= k - i; j++) {
                //범위의 시작
                int end = i + j;
                dp[j][end] = INF;
                for(int mid = j; mid < end; mid++) {
                    dp[j][end] = min(dp[j][end], dp[j][mid] + dp[mid + 1][end] + sum[end] - sum[j - 1]);
                }
            }
        }
        cout << dp[1][k] << "\n";
    }
    return 0;
}
