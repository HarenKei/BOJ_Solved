#include<bits/stdc++.h>
#define MAX 50001
#define INF 987654321

using namespace std;

int n, m;
vector<pair<int,int>> cowRoad[MAX];
//first : 도착지 second : 가중치
priority_queue<pair<int, int>> pq;
//first : 가중치 second : 시작지
int dist[MAX];

void dijkstra(int start) {
    pq.push({0, start});
    dist[start] = 0;

    while(!pq.empty()) {
        int curNode = pq.top().second;
        int curCost = -pq.top().first;
        pq.pop();

        if(dist[curNode] < curCost) {
            continue;
        }

        for(int i = 0; i < cowRoad[curNode].size(); i++) {
            int nxtNode = cowRoad[curNode][i].first;
            int nxtCost = curCost + cowRoad[curNode][i].second;

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

    for(int i = 0; i < m; i++) {
        int a, b, c;
        //a 출발지 b 도착지 c 가중치
        cin >> a >> b >> c;

        cowRoad[a].push_back({b, c});
        cowRoad[b].push_back({a, c});
    }

    for(int i = 0; i <= n; i++) {
        dist[i] = INF;
    }

    dijkstra(1);

    cout << dist[n] << "\n";

    return 0;
}
