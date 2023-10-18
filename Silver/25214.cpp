#include <bits/stdc++.h>
#define MAX 200001

using namespace std;

int n;
int dp[MAX];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> n;

    int minInput = 987654321;

    for(int i = 0; i < n; i++) {
        int input;
        cin >> input;

        if(i == 0) {
            dp[i] = 0;
            minInput = input;
        } else {
            if(input < minInput) {
                minInput = input;
            }

            dp[i] = max(dp[i - 1], input - minInput);
        }

        cout << dp[i] << " ";
    }

    return 0;
}
