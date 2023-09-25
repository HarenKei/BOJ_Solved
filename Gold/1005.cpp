#include <bits/stdc++.h>
#define MAX 100001

using namespace std;

int t, n, k, w;
vector<int> build[MAX];
int buildTime[1001];
int inDegree[MAX];
int dp[MAX];

void topologySort() {
    queue<int> q;

    for(int i = 1; i <= n; i++) {
        if(inDegree[i] == 0) {
            q.push(i);
            dp[i] = buildTime[i];
        }
    }

    while(!q.empty()) {
        int cur = q.front();
        q.pop();

        for(int i = 0; i < build[cur].size(); i++) {
            int nxt = build[cur][i];
            dp[nxt] = max(dp[nxt], dp[cur] + buildTime[nxt]);

            if(--inDegree[nxt] == 0) q.push(nxt);
        }
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> t;

    while(t--) {
        cin >> n >> k;

        for(int i = 1; i <= n; i++) {
            cin >> buildTime[i];
        }

        for(int i = 1; i <= k; i++) {
            int x, y;
            cin >> x >> y;
            build[x].push_back(y);
            inDegree[y] ++;
        }

        cin >> w;

        topologySort();

        cout << dp[w] << "\n";

        memset(buildTime, 0, sizeof(buildTime));
        memset(inDegree, 0, sizeof(inDegree));
        memset(dp, 0, sizeof(dp));
        for(int i = 1; i <= n; i++) {
            build[i].clear();
        }
    }

    return 0;
}
