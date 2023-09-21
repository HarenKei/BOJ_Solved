#include <bits/stdc++.h>
#define MAX 100001
#define INF 987654321

using namespace std;

int n, m;
int start, dest;
vector<pair<int, int>> MAP[MAX];
vector<int> result;
priority_queue<pair<int, int>> pq;
int dist[1001];
int route[1001];
vector<int> ans;

void dijkstra() {
    for(int i = 1; i <= n; i++) {
        dist[i] = INF;
    }

    dist[start] = 0;
    pq.push({0, start});
    ans.push_back(start);

    while(!pq.empty()) {
        int curNode = pq.top().second;
        int curCost = -pq.top().first;
        pq.pop();

        if(dist[curNode] < curCost) continue;

        for(int i = 0; i < MAP[curNode].size(); i++) {
            int nxtNode = MAP[curNode][i].first;
            int nxtCost = curCost + MAP[curNode][i].second;

            if(dist[nxtNode] > nxtCost) {
                route[nxtNode] = curNode;
                dist[nxtNode] = nxtCost;
                pq.push({-nxtCost, nxtNode});
            }
        }
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> n >> m;

    for(int i = 0; i < m; i++) {
        int s, e, c;
        cin >> s >> e >> c;
        MAP[s].push_back({e, c});
    }

    cin >> start >> dest;

    dijkstra();

    int idx = dest;
    while(1) {
        if(route[idx] == 0) {
            result.push_back(start);
            break;
        }
        result.push_back(idx);
        idx = route[idx];
    }

    reverse(result.begin(), result.end());
    cout << dist[dest] << "\n";
    cout << result.size() << "\n";

    for(auto i : result) {
        cout << i << " ";
    }
    cout << "\n";

    return 0;
}
