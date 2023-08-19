#include<bits/stdc++.h>

using namespace std;

int n, m, t, sy, sx;
int MAP[101][101];
bool visited[101][101][2];
//[][][0] : 그람 안 먹음
//[][][1] : 그람 먹음
pair<int, int> dir[4] = {{0, -1}, {0, 1}, {-1, 0}, {1, 0}};
queue<pair<pair<int, int>, pair<bool, int>>> q;
//first.first : x
//first.second : y
//second.first : sword
//second.second : dist

void BFS() {
    q.push({{0, 0}, {false, 0}});

    while(!q.empty()) {
        int curX = q.front().first.first;
        int curY = q.front().first.second;
        bool chkSword = q.front().second.first;
        int curDist = q.front().second.second;
        q.pop();

        if(curDist > t) {
            cout << "Fail\n";
            return;
        }

        if(curX == n - 1 && curY == m - 1) {
            cout << curDist << "\n";
            return;
        }

        for(int i = 0; i < 4; i++) {
            int nxtX = curX + dir[i].first;
            int nxtY = curY + dir[i].second;
            int nxtDist = curDist + 1;

            if(nxtX < 0 || nxtX >= n || nxtY < 0 || nxtY >= m) continue;

            if(chkSword) {
                if(!visited[nxtX][nxtY][1]) {
                    visited[nxtX][nxtY][1] = true;
                    q.push({{nxtX, nxtY}, {true, nxtDist}});
                }
            } else {
                if(!visited[nxtX][nxtY][0] && MAP[nxtX][nxtY] == 0) {
                    visited[nxtX][nxtY][0] = true;
                    q.push({{nxtX, nxtY}, {false, nxtDist}});
                } else if(!visited[nxtX][nxtY][0] && MAP[nxtX][nxtY] == 2) {
                    visited[nxtX][nxtY][1] = true;
                    q.push({{nxtX, nxtY}, {true, nxtDist}});
                }
            }
        }
    }

    cout << "Fail\n";

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> n >> m >> t;

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cin >> MAP[i][j];
        }
    }

    BFS();

    return 0;

}
