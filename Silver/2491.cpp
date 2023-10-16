#include <bits/stdc++.h>
#define MAX 100001

using namespace std;

int n;
int arr[MAX];
int dp[MAX][2];
int ans = 0;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> n;

    for (int i = 1; i <= n; i++) {
        cin >> arr[i];
        dp[i][0] = 1;
        dp[i][1] = 1;
    }

    ans = 1;

    for (int i = 1; i <= n; i++) {
        if(arr[i] > arr[i - 1]) {
            dp[i][0] = max(dp[i][0], dp[i - 1][0] + 1);
        } else if (arr[i] < arr[i - 1]) {
            dp[i][1] = max(dp[i][1], dp[i - 1][1] + 1);
        } else {
            dp[i][0] = max(dp[i][0], dp[i - 1][0] + 1);
            dp[i][1] = max(dp[i][1], dp[i - 1][1] + 1);
        }

        ans = max(ans, max(dp[i][0], dp[i][1]));
    }

    cout << ans << "\n";


    return 0;
}
