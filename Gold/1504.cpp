#include <bits/stdc++.h>
#define INF 987654321

using namespace std;

int n, e, v1, v2;
int result = INF;
vector<pair<int, int>> route[801];
int dist[801];
priority_queue<pair<int, int>> pq;

//시작 -> v1 -> v2 -> n
//시작 -> v2 -> v1 -> n

int sV1, sV2; //시작 -> v1 Or v2
int v1N, v2N, v1v2; //v1 Or v2 ->n & v1 -> v2

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

    cin >> n >> e;

    for(int i = 0; i < e; i++) {
        int a, b, c;
        //출발 / 도착 / 가중치
        cin >> a >> b >> c;
        route[a].push_back({b,c});
        route[b].push_back({a, c});
    }

    cin >> v1 >> v2;



    dijkstra(1);
    sV1 = dist[v1];
    sV2 = dist[v2];

    dijkstra(v1);
    v1v2 = dist[v2];
    v1N = dist[n];

    dijkstra(v2);
    v2N = dist[n];

    if(sV1 == INF || sV2 == INF || v1N == INF || v2N == INF) {
        cout << -1 << "\n";
        return 0;
    }

    result = min(result, sV1 + v1v2 + v2N);
    result = min(result, sV2 + v1v2 + v1N);

    if(result != INF) {
        cout << result << "\n";
    } else {
        cout << -1 << "\n";
    }

    return 0;
}
