#include <bits/stdc++.h>
#define MAX 1001

using namespace std;

int n, m, ans;
int MAP[MAX][MAX];
int dy[4] = {1, -1, 0, 0}; //D, U, L, R
int dx[4] = {0, 0, -1, 1}; // D, U, L, R
int visited[MAX][MAX];

void DFS(int y, int x) {
    visited[y][x] = 1;

    int ny = y + dy[MAP[y][x]];
    int nx = x + dx[MAP[y][x]];

    if(visited[ny][nx] == 1) {
        //이미 방문했다면 사이클 발생
        ans++;
    }

    if(visited[ny][nx] == 0) {
        DFS(ny, nx);
    }

    visited[y][x] = 2;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> n >> m; //y, x

    for(int i = 0; i < n; i++) {
        string str;
        cin >> str;

        for(int j = 0; j < m; j++) {
            if(str[j] == 'U') MAP[i][j] = 1;
            else if(str[j] == 'L') MAP[i][j] = 2;
            else if(str[j] == 'R') MAP[i][j] = 3;
        }
    }

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            if(visited[i][j] == 0) DFS(i, j);
        }
    }

    cout << ans << "\n";

    return 0;
}
