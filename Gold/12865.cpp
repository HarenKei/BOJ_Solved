#include<bits/stdc++.h>

using namespace std;

int n, k;
int dp[101][100001];
vector<pair<int, int>> wv;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> n >> k;

    wv.push_back({0, 0});

    for(int i = 0; i < n; i++) {
        int weight, value;
        cin >> weight >> value;
        wv.push_back({weight, value});
    }

    for(int i = 1; i <= n; i++) {
        //물건의 갯수만큼 반복한다.
        for(int j = 1; j <= k; j++) {
            //물건을 담을 수 있는 가방의 무게 한도

            if(wv[i].first > j) {
                //i번째 물건의 무게가 현재 한도보다 크다면 담을 수 없다.
                dp[i][j] = dp[i - 1][j];
            } else {
                //담을 수 있다면
                dp[i][j] = max(dp[i - 1][j - wv[i].first] + wv[i].second, dp[i - 1][j]);
            }
        }
    }

    cout << dp[n][k] << "\n";

    return 0;
}
