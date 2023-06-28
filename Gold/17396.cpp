#include<bits/stdc++.h>
#define INF 10000000001
#define MAXN 100001
#define MAXM 300001

using namespace std;

int n, m, visable[MAXN];
vector<pair<int, long long>> road[MAXM];
long long dist[MAXN];
priority_queue<pair<long long, int>> pq;

void dijkstra(int start) {
    pq.push({0, start});
    dist[start] = 0;

    while(!pq.empty()) {
        int curNode = pq.top().second;
        long long curCost = -pq.top().first;
        pq.pop();

        if(dist[curNode] < curCost) continue;

        for(int i = 0; i < road[curNode].size(); i++) {
            int nxtNode = road[curNode][i].first;
            long long nxtCost = curCost + road[curNode][i].second;

            if(dist[nxtNode] > nxtCost && (nxtNode == n - 1 || visable[nxtNode] != 1)) {
                dist[nxtNode] = nxtCost;
                pq.push({-nxtCost, nxtNode});
            }
        }

    }
}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> n >> m;

    for(int i = 0; i < n; i++) {
        int input;
        cin >> input;
        visable[i] = input;
        dist[i] = INF;
    }

    for(int i = 0; i < m; i++) {
        int a, b;
        long long t;
        cin >> a >> b >> t;
        road[a].push_back({b, t});
        road[b].push_back({a, t});
    }

    dijkstra(0);

    if(dist[n - 1] == INF) {
        cout << -1 << "\n";
    } else {
        cout << dist[n - 1] << "\n";
    }

    return 0;
}
