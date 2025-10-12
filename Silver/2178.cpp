#include <bits/stdc++.h>

using namespace std;

int n, m; // row, col 순
vector<vector<int>> graph; // 그래프
vector<vector<bool>> visited; // 방문 체크
vector<vector<int>> dist; // 거리 저장
vector<vector<int>> dir = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}}; //상, 하,좌,우 이동
void BFS(int r, int c);

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n >> m;

    graph = vector<vector<int>>(n, vector<int>(m, 0));
    visited = vector<vector<bool>>(n, vector<bool>(m, false));
    dist = vector<vector<int>>(n, vector<int>(m, 0));

    for (int i = 0; i < n; i++) {
        string input;
        cin >> input;

        for(int j = 0; j < input.length(); j++) {
            graph[i][j] = input[j] - '0';
        }
    }

    BFS(0, 0);

    cout << dist[n-1][m-1] << "\n";

    return 0;
}

void BFS(int r, int c) {
    queue<pair<int, int>> q;

    visited[r][c] = true;
    q.push(make_pair(r, c));
    dist[r][c]++;

    while (!q.empty()) {
        int curR = q.front().first;
        int curC = q.front().second;
        q.pop();

        for(auto& d : dir) {    
            int nxtR = curR + d[0];
            int nxtC = curC + d[1];

            if(nxtR >= 0 && nxtC >= 0 && nxtR < n && nxtC < m && graph[nxtR][nxtC] == 1) {
                if(!visited[nxtR][nxtC]) {
                    visited[nxtR][nxtC] = true;
                    q.push(make_pair(nxtR, nxtC));
                    dist[nxtR][nxtC] = dist[curR][curC] + 1;
                }
            }
        }
    }
}