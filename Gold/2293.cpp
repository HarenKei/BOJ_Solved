#include<bits/stdc++.h>

using namespace std;

int n, k;
vector<int> coin;
int dp[10001];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> n >> k;

    for(int i = 0; i < n; i++) {
        int input;
        cin >> input;
        coin.push_back(input);
    }

    dp[0] = 1; //0원을 만드는 방법은 아무 동전도 사용하지 않는 방법 1가지

    for(int i = 0; i < coin.size(); i++) {
        for(int j = coin[i]; j <= k; j++) {
            dp[j] += dp[j - coin[i]];
        }
    }

    cout << dp[k] << "\n";

    return 0;
}
