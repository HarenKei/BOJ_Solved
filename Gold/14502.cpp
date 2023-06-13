#include <bits/stdc++.h>
#define INF 987654321

using namespace std;

int n, m, ans = 0;
int MAP[9][9];
int tmp[9][9];
int dx[4] = {0, 0, -1, 1};
int dy[4] = {-1, 1, 0, 0};
bool visited[9][9];

void cpMap(int tmpMap[9][9], int oriMap[9][9]) {
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            tmpMap[i][j] = oriMap[i][j];
        }
    }
}



void BFS() {
    int virusMap[9][9];
    cpMap(virusMap, tmp);
    queue<pair<int, int>> q;

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            if(virusMap[i][j] == 2)
                q.push({i,j});
        }
    }

    while(!q.empty()) {
        int cx = q.front().first;
        int cy = q.front().second;
        q.pop();

        for(int i = 0; i < 4; i++) {
            int nx = cx + dx[i];
            int ny = cy + dy[i];

            if(0 <= nx && 0 <= ny && nx < n && ny < m) {
                if(virusMap[nx][ny] == 0) {
                    virusMap[nx][ny] = 2;
                    q.push({nx, ny});
                }
            }
        }
    }

    int cnt = 0;

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            if(virusMap[i][j] == 0) {
                cnt++;
            }
        }
    }

    ans = max(ans, cnt);

}

void makeWall(int cnt) {
    if(cnt == 3) {
        BFS();
        return;
    } else {
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                if(tmp[i][j] == 0) {
                    tmp[i][j] = 1;
                    makeWall(cnt + 1);
                    tmp[i][j] = 0;
                }
            }
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n >> m;

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cin >> MAP[i][j];
        }
    }

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
           if(MAP[i][j] == 0) {
               cpMap(tmp, MAP);
               tmp[i][j] = 1;
               makeWall(1);
               tmp[i][j] = 0;
           }

        }
    }

    cout << ans << "\n";
    return 0;
}


