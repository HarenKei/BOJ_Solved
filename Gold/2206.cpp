#include<bits/stdc++.h>
#define MAX 1001

using namespace std;

int n, m;
int MAP[MAX][MAX];
int visited[MAX][MAX][2]; //x, y, 벽 부순 여부.
queue<pair<pair<int, int>, pair<int, bool>>> q;
//first.first : x, first.second : y, second.first : 이동 거리, second.second : 벽 부순 여부
int dx[4] = {0, 0, -1, 1};
int dy[4] = {-1, 1, 0, 0};

void BFS() {
    visited[0][0][0] = true;
    q.push({{0, 0},{1, false}});

    while(!q.empty()) {
        int cx = q.front().first.first;
        int cy = q.front().first.second;
        int cDist = q.front().second.first;
        bool chkBrake = q.front().second.second;
        q.pop();

        if(cx == n - 1 && cy == m - 1) {
            cout << cDist << "\n";
            return;
        }

        for(int i = 0; i < 4; i++) {
            int nx = cx + dx[i];
            int ny = cy + dy[i];
            int nxtDist = cDist + 1;

            if(nx < 0 || nx >= n || ny < 0 || ny >= m) continue;

            if(chkBrake) {
                //벽을 부순 경우
                if(!visited[nx][ny][1] && MAP[nx][ny] != 1) {
                    visited[nx][ny][1] = true;
                    q.push({{nx, ny}, {nxtDist, true}});
                }
            } else {
                if(!visited[nx][ny][0] && MAP[nx][ny] != 1) {
                    //아직 벽을 부수지 않았고, 다음 탐색 좌표도 벽이 아님
                    visited[nx][ny][0] = true;
                    q.push({{nx, ny}, {nxtDist, false}});
                } else if(!visited[nx][ny][0] && MAP[nx][ny] == 1) {
                    //아직 벽을 부수지 않았지만 다음 탐색 좌표가 벽이라 부술 것임.
                    visited[nx][ny][1] = true;
                    q.push({{nx, ny}, {nxtDist, true}});
                }
            }
        }
    }

    cout << -1 << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> n >> m;

    for(int i = 0; i < n; i++) {
        string str;
        cin >> str;

        for(int j = 0; j < str.length(); j++) {
            MAP[i][j] = str[j] - '0';
        }
    }

    BFS();

    return 0;
}
