#include<bits/stdc++.h>
#define INF 987654321

using namespace std;

int n, m, x;
vector<pair<int, int>> road[100001]; //first : d, second : cost
int dist[1001];
priority_queue<pair<int, int>> pq; //first :cost, second : d

void dijkstra(int start) {
    pq.push({0, start});
    dist[start] = 0;

    while(!pq.empty()) {
        int curNode = pq.top().second;
        int curCost = -pq.top().first;
        pq.pop();

        if(dist[curNode] < curCost) continue;

        for(int i = 0; i < road[curNode].size(); i++) {
            int nxtNode = road[curNode][i].first;
            int nxtCost = curCost + road[curNode][i].second;

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

    cin >> n >> m >> x;

    for(int i = 0; i < m; i++) {
        int s, d, c;
        cin >> s >> d >> c;
        road[s].push_back({d,c});
        road[d].push_back({s, c});
    }

    for(int i = 1; i <= n; i++) {
        dist[i] = INF;
    }

    dijkstra(x);

    int ans = 0;
    for(int i = 1; i <= n; i++) {
        ans = max(ans, dist[i]);
    }

    cout << ans * 2 << "\n";

    return 0;
}
