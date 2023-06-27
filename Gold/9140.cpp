#include<bits/stdc++.h>
#define INF 987654321

using namespace std;

int n = 1, m, s, c;
vector<pair<int, int>> road[50001]; //first : cost, second : end node
int dist[10001];
priority_queue<pair<int, int>> pq; //first : -cost, second : end node

void dijkstra(int start) {
    for(int i = 1; i <= n; i++) {
        dist[i] = INF;
    }

    pq.push({0, start});
    dist[start] = 0;

    while(!pq.empty()) {
        int curNode = pq.top().second;
        int curCost = -pq.top().first;
        pq.pop();

        if(dist[curNode] < curCost) continue;

        for(int i = 0; i < road[curNode].size(); i++) {
            int nxtNode = road[curNode][i].second;
            int nxtCost = curCost + road[curNode][i].first;

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

    cin >> n >> m >> s >> c;

    while(n || m || s || c) {

        for(int i = 0; i < m; i++) {
            int a, b, c;
            cin >> a >> b >> c;

            road[a].push_back({c, b});
        }

        dijkstra(s);
        cout << dist[c] << "\n";

        memset(road, 0, sizeof(road));
        cin >> n >> m >> s >> c;
    }

    return 0;
}
