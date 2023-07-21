#include<bits/stdc++.h>

using namespace std;

int t;
vector<int> input;
int dp[45];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> t;

    dp[0] = 1;
    dp[1] = 1;

    while(t--) {
        int n;
        cin >> n;
        input.push_back(n);
    }

    for(int i = 2; i <= *max_element(input.begin(), input.end()); i++) {
        dp[i] = dp[i - 1] + dp[i - 2];
    }

    for(auto it = input.begin(); it != input.end(); it++) {
        cout << dp[*it] << "\n";
    }

    return 0;
}
