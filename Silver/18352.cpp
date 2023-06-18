#include<bits/stdc++.h>
#define INF 987654321


using namespace std;

int n, m, k, x;
vector<int> road[300001];
int dist[300001];
priority_queue<pair<int, int>> pq;

void dijkstra(int start) {
    pq.push({0, start});
    dist[start] = 0;

    while(!pq.empty()) {
        int curNode = pq.top().second;
        int curDist = -pq.top().first;
        pq.pop();

        if(dist[curNode] < curDist) continue;

        for(int i = 0; i < road[curNode].size(); i++) {
            int nxtNode = road[curNode][i];
            int nxtDist = curDist + 1;

            if(dist[nxtNode] > nxtDist) {
                dist[nxtNode] = nxtDist;
                pq.push({-nxtDist, nxtNode});
            }


        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> n >> m >> k >> x;

    for(int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;

        road[a].push_back(b);
    }

    for(int i = 1; i <= n; i++) {
        dist[i] = INF;
    }

    dijkstra(x);

    bool chk = false;

    for(int i = 1; i <= n; i++) {
        if(dist[i] == k) {
            chk = true;
            cout << i << "\n";
        }
    }

    if(!chk) cout << -1 << "\n";

    return 0;
}
