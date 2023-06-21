#include<bits/stdc++.h>
#define INF 987654321

using namespace std;

int n, m;
vector<pair<int, int>> node[1001];
//first : destination node, second : code
priority_queue<pair<int, int>> pq;
//first : cost, second : destination node
int dist[1001];

void initDist() {
    for(int i = 1; i <= n; i++) {
        dist[i] = INF;
    }
}

void dijkstra(int start) {
    pq.push({0, start});
    dist[start] = 0;

    while(!pq.empty()) {
        int curNode = pq.top().second;
        int curCost = -pq.top().first;
        pq.pop();

        if(dist[curNode] < curCost) continue;

        for(int i = 0; i < node[curNode].size(); i++) {
            int nxtNode = node[curNode][i].first;
            int nxtCost = curCost + node[curNode][i].second;

            if(dist[nxtNode] > nxtCost) {
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

    for(int i = 1; i < n; i++) {
        int s, d, c;
        //출발노드, 도착노드, 가중치
        cin >> s >> d >> c;
        node[s].push_back({d, c});
        node[d].push_back({s, c});
    }

    for(int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;
        initDist();
        dijkstra(a);
        cout << dist[b] << "\n";
    }

    return 0;
}
