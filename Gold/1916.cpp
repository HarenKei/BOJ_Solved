#include <bits/stdc++.h>
#define INF 987654321

using namespace std;

int n, m, start, dest;
vector<pair<int, int>> bus[1001]; //first : 도착도시 , second : 버스 비용
// 각 노드에 연결되어 있는 노드에 대한 정보를 담는 배열
priority_queue<pair<int, int>> pq; //first : 비용, second: 시작 도시 (정점)
int dist[1001]; //최소비용 배열

void dijkstra() {
    pq.push({0, start}); //시작 정점까지 가는 비용은 0
    dist[start] = 0;

    while(!pq.empty()) {
        int curNode = pq.top().second;
        int curCost = -pq.top().first;
        pq.pop();

        if(dist[curNode] < curCost) continue; //dist[curNode]까지 드는 비용이 현재의 비용보다 작으면 그냥 지나가도 됨.

        for(int i = 0; i < bus[curNode].size(); i++) {
            int nxtNode = bus[curNode][i].first;
            int nxtCost = curCost + bus[curNode][i].second;

            if(dist[nxtNode] > nxtCost) {
                dist[nxtNode] = nxtCost; //적은 비용으로 갱신
                pq.push({-nxtCost, nxtNode});
            }
        }
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n >> m;

    for(int i = 0; i <m; i++) {
        int sc, dc, cst; //출발도시, 도착도시, 비용
        cin >> sc >> dc >> cst;
        bus[sc].push_back({dc, cst}); //sc에서 출발한 버스가 dc까지 가는데에 드는 비용을 나타내는 그래프.
    }

    cin >> start >> dest;

    for(int i = 1; i <= n; i++) {
        dist[i] = INF; //최단비용 거리를 INF로 초기화
    }

    dijkstra();

    cout << dist[dest] << "\n";



    return 0;
}
