#include<bits/stdc++.h>
#define INF 987654321

using namespace std;

int cnt = 1, n;
int MAP[126][126];
int dx[4] = {0, 0, -1, 1};
int dy[4] = {-1, 1, 0, 0};
priority_queue<pair<int, pair<int, int>>> pq; //first.first : 비용, second.first : x, second.second : y
int dist[126][126]; //최소비용

void dijkstra() {
    pq.push({0, {0, 0}});
    dist[0][0] = MAP[0][0];

    while(!pq.empty()) {
        int curCost = -pq.top().first;
        int curX = pq.top().second.first;
        int curY = pq.top().second.second;
        pq.pop();

        if(dist[curX][curY] < curCost) continue;

        for(int i = 0; i < 4; i++) {
            int nx = curX + dx[i];
            int ny = curY + dy[i];
            int nxtCost = MAP[nx][ny];

            if(nx < 0 || nx >= n || ny < 0 || ny >= n) continue;

            if(dist[nx][ny] > dist[curX][curY] + nxtCost) {
                dist[nx][ny] = dist[curX][curY] + nxtCost;
                pq.push({-(dist[curX][curY] + nxtCost), {nx, ny}});
            }
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    while(1) {
        cin >> n;

        if(n == 0) {
            break;
        }

        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++) {
                cin >> MAP[i][j];
                dist[i][j] = INF;
            }
        }

        dijkstra();

        cout << "Problem " << cnt++ << ": " << dist[n - 1][n - 1] << "\n";

        memset(MAP, 0, sizeof(MAP));

    }


    return 0;
}
