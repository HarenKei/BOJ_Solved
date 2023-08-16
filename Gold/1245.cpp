#include<bits/stdc++.h>

using namespace std;

int n, m, cnt = 0;
bool flag;
pair<int, int> dir[8] = {{1, 0}, {1, 1},{0, 1},{-1, 1},{-1, 0}, {-1, -1}, {0, -1}, {1, -1}};
int MAP[101][71];
bool visited[101][71];
queue<pair<int, int>> q;

void BFS(int x, int y) {
    visited[x][y] = true;
    q.push({x, y});

    while(!q.empty()) {
        int curX = q.front().first;
        int curY = q.front().second;
        q.pop();

        for(int i = 0; i < 8; i++) {
            int nxtX = curX + dir[i].first;
            int nxtY = curY + dir[i].second;

            if(nxtX < 0 || nxtY < 0 || nxtX >= n || nxtY >= m) continue;

            if(MAP[x][y] < MAP[nxtX][nxtY]) flag = false;

            if(!visited[nxtX][nxtY] && MAP[x][y] == MAP[nxtX][nxtY]) {
                visited[nxtX][nxtY] = true;
                q.push({nxtX, nxtY});
            }
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> n >> m;

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cin >> MAP[i][j];
        }
    }

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            if(!visited[i][j]){
                flag = true;
                BFS(i, j);
                if(flag) cnt++;
            }
        }
    }

    cout << cnt << "\n";


    return 0;
}
