#include <bits/stdc++.h>
#define INF 987654321

using namespace std;

int v, e, k;
vector<pair<int, int>> route[300001];
//first : 도착지 / second : 가중치
int dist[300001];
//최소 비용
priority_queue<pair<int, int>> pq;
//first : 가중치 / second : 출발지

void dijkstra(int start) {
    pq.push({0, start});
    dist[start] = 0;

    while(!pq.empty()) {
        int curNode = pq.top().second;
        int curCost = -pq.top().first;
        pq.pop();

        if(dist[curNode] < curCost) continue;

        for(int i = 0; i < route[curNode].size(); i++) {
            int nxtNode = route[curNode][i].first;
            int nxtCost = curCost + route[curNode][i].second;

            if(dist[nxtNode] > nxtCost) {
                dist[nxtNode] = nxtCost;
                pq.push({-nxtCost, nxtNode});
            }
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> v >> e >> k;

    for(int i = 0; i < e; i++) {
        int s, d, c; //시작, 도착, 가중치
        cin >> s >> d>> c;
        route[s].push_back({d, c});
        //s에서 출발하여 d까지 가는데에 걸리는 가중치를 나타냄.
    }

    for(int i = 1; i <= v; i++) {
        dist[i] = INF;
    }

    dijkstra(k);

    for(int i = 1; i <= v; i++) {
        if(dist[i] == INF) {
            cout << "INF\n";
        } else {
            cout << dist[i] << "\n";
        }

    }

    return 0;
}
