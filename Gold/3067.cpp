#include<bits/stdc++.h>

using namespace std;

int t, n, m;
int dp[10001];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> t;

    while(t--) {
        memset(dp, 0, sizeof(dp)); //dp 배열 초기화
        vector<int> coin;

        cin >> n; //동전의 종류

        for(int i = 0; i < n; i++) {
            //동전 가치 입력
            int input;
            cin >> input;
            coin.push_back(input);
        }

        cin >> m; //만들어야 하는 금액

        dp[0] = 1; //0원을 만드는 경우는 아무 동전도 사용하지 않는 경우 1가지

        for(int i = 0; i < coin.size(); i++) {
            for(int j = coin[i]; j <= m; j++) {
                dp[j] += dp[j - coin[i]];
            }
        }

        cout << dp[m] << "\n";
    }

    return 0;
}
