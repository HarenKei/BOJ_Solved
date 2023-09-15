#include <bits/stdc++.h>
#define MAX 10001

using namespace std;

int n, ans = 0;
vector<int> WORK[MAX];
int workTime[MAX];
int inDegree[MAX];
int dp[MAX];

void topologySort() {
    queue<int> q;

    for(int i = 1; i <= n; i++) {
        if(inDegree[i] == 0) {
            q.push(i);
            dp[i] = workTime[i];
        }
    }

    while(!q.empty()) {
        int cur = q.front();
        ans = max(ans, dp[cur]);
        q.pop();

        for(int i = 0; i < WORK[cur].size(); i++) {
            int nxt = WORK[cur][i];
            dp[nxt] = max(dp[nxt], dp[cur] + workTime[nxt]);

            if(--inDegree[nxt] == 0) q.push(nxt);
        }
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> n;

    for(int i = 1; i <= n; i++) {
        int time, cnt;
        cin >> time >> cnt;
        workTime[i] = time;
        inDegree[i] = cnt;

        for(int j = 1; j <= cnt; j++) {
            int tmp;
            cin >> tmp;
            WORK[tmp].push_back(i);
        }
    }

    topologySort();

    cout << ans << "\n";

    return 0;
}
