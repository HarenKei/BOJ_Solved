#include<bits/stdc++.h>
#define INF 987654321
#define MAX 1001

using namespace std;

int n, m, x, ans = 0;
vector<pair<int, int>> MAP[2][MAX];
vector<int> dist[2];

void dijkstra(int start) {
    dist[start][x] = 0;

    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    pq.push({0, x});

    while(!pq.empty()) {
        int curCost = pq.top().first;
        int curNode = pq.top().second;
        pq.pop();

        if(curCost > dist[start][curNode]) continue;

        for(int i = 0; i < MAP[start][curNode].size(); i++) {
            int nxtNode = MAP[start][curNode][i].second;
            int nxtCost = curCost + MAP[start][curNode][i].first;

            if(nxtCost < dist[start][nxtNode]) {
                dist[start][nxtNode] = nxtCost;
                pq.push({nxtCost, nxtNode});
            }
        }
    }


}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> n >> m >> x;

    for(int i = 0; i < m; i++) {
        int s, e, t;
        cin >> s >> e >> t;
        MAP[0][s].push_back({t, e});
        MAP[1][e].push_back({t, s});
    }

    dist[0].resize(n + 1, INF);
    dist[1].resize(n + 1, INF);

    dijkstra(0);
    dijkstra(1);

    for(int i = 1; i <= n; i++) {
        ans = max(ans, dist[0][i] + dist[1][i]);
    }

    cout << ans << "\n";

    return 0;
}
