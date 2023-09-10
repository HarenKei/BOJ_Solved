#include<bits/stdc++.h>

using namespace std;

int m, n, ans = 0;
int MAP[501][501];
int dp[501][501];
int dx[4] = {0, 0, -1, 1};
int dy[4] = {-1, 1, 0, 0};

int DFS(int x, int y) {
    if (x == m - 1 && y == n - 1) return 1;
    if (dp[x][y] != -1) return dp[x][y];

    dp[x][y] = 0;

    for (int i = 0; i < 4; i++) {
        int nx = x + dx[i];
        int ny = y + dy[i];

        if (nx < 0 || nx >= m || ny < 0 || ny >= n) continue;

        if (MAP[x][y] > MAP[nx][ny]) {
            DFS(nx, ny);
            dp[x][y] = dp[x][y] + DFS(nx, ny);
        }
    }

    return dp[x][y];
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> m >> n;

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> MAP[i][j];
            dp[i][j] = -1;
        }
    }

    cout << DFS(0, 0) << "\n";

    return 0;

