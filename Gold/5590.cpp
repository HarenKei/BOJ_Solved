#include<bits/stdc++.h>
#define INF 987654321
#define MAX 101

using namespace std;

int n, k;
int dist[MAX];
vector<int> result;
vector<pair<int, int>> road[MAX];
priority_queue<pair<int, int>> pq;

void dijkstra(int start) {
    for(int i = 0; i <= n; i++) {
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

    cin >> n >> k;

    for(int i = 0; i < k; i++) {
        int chk, a, b, c, d, e;

        cin >> chk;

        if(chk == 0) {
            cin >> a >> b;
            dijkstra(a);
            result.push_back(dist[b]);
        } else {
            cin >> c >> d >> e;
            road[c].push_back({d, e});
            road[d].push_back({c, e});
        }
    }

    for(auto it = result.begin(); it != result.end(); it++) {
        if(*it == INF) {
            cout << -1 << "\n";
        } else {
            cout << *it << "\n";
        }
    }

    return 0;
}
