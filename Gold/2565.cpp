#include<bits/stdc++.h>

using namespace std;

int n;
vector<int> dp(101);
vector<pair<int, int>> line;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> n;

    line.push_back({0, 0});

    for(int i = 1; i <= n; i++) {
        int a, b;
        cin >> a >> b;
        line.push_back({a, b});
    }

    sort(line.begin(), line.end());

    for(int i = 1; i <= n; i++) {
        dp[i] = 1;
        for(int j = 1; j < i; j++) {
            if(line[i].second > line[j].second) {
                dp[i]= max(dp[i], dp[j] + 1);
            }
        }
    }

    cout << n - *max_element(dp.begin(), dp.end()) << "\n";

    return 0;
}
