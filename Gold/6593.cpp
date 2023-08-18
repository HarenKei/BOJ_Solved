#include<bits/stdc++.h>

using namespace std;

int l, r, c;
int sz, sx, sy;
int ez, ex, ey;
char MAP[31][31][31];
int dx[6] = {1, -1, 0, 0, 0, 0}; //동서남북상하
int dy[6] = {0, 0, 1, -1, 0, 0};
int dz[6] = {0, 0, 0, 0, 1, -1};

bool visited[31][31][31];

int BFS(int z, int x, int y) {
    queue<pair<pair<int, int>, pair<int, int>>> q;
    visited[z][x][y] = true;
    q.push({{z, x}, {y, 0}});

    while(!q.empty()) {
        int curZ = q.front().first.first;
        int curX = q.front().first.second;
        int curY = q.front().second.first;
        int curR = q.front().second.second;
        q.pop();

        for(int i = 0; i < 6; i++) {
            int nxtZ = curZ + dz[i];
            int nxtX = curX + dx[i];
            int nxtY = curY + dy[i];

            if(nxtZ < 0 || nxtZ >= l || nxtX < 0 || nxtX >= r || nxtY < 0 || nxtY >= c ) continue;

            if(nxtZ == ez && nxtX == ex && nxtY == ey) {
                return curR + 1;
            }

            if(!visited[nxtZ][nxtX][nxtY] && MAP[nxtZ][nxtX][nxtY] == '.') {
                visited[nxtZ][nxtX][nxtY] = true;
                q.push({{nxtZ, nxtX}, {nxtY, curR + 1}});
            }
        }
    }
    return -1;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    while(1) {
        cin >> l >> r >> c;

        if(l == 0 && r == 0 && c == 0) {
            break;
        }

        for(int i = 0; i < l; i++) {
            for(int j = 0; j < r; j++) {
                for(int k = 0; k < c; k++) {
                    cin >> MAP[i][j][k];

                    if(MAP[i][j][k] == 'S') {
                        sz = i;
                        sx = j;
                        sy = k;
                    }

                    if(MAP[i][j][k] == 'E') {
                        ez = i;
                        ex = j;
                        ey = k;
                    }
                }
            }
        }


        int ans = BFS(sz, sx, sy);

        if(ans == -1) {
            cout << "Trapped!\n";
        } else {
            cout << "Escaped in " << ans << " minute(s).\n";
        }
        memset(MAP, ' ', sizeof(MAP));
        memset(visited, false, sizeof(visited));
    }

    return 0;
}
