#include<bits/stdc++.h>
#define MAX 100001

using namespace std;

int c, n;
int dp[MAX];
vector <pair<int, int>> v;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> c >> n;

    for(int i = 1; i <= n; i++) {
        int cost, people;
        cin >> cost >> people;
        v.push_back({cost, people});
    }

    for(int i = 1; i <= MAX; i++) {
        for(int j = 0; j < n; j++) {
            if(i - v[j].first >= 0) {
                dp[i] = max(dp[i], dp[i - v[j].first] + v[j].second);
            }
        }
        if(c <= dp[i]) {
            cout << i << "\n";
            break;
        }
    }
    
    return 0;
}
