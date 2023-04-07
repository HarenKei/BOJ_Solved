#include <bits/stdc++.h>

using namespace std;

int n;
bool visited[501][501];
int dx[8] = {-2, -2, -1, -1, 1, 1, 2, 2};
int dy[8] = {-1, 1, -2, 2, -2, 2, -1, 1};
int dis[501][501];
int result[1001];

void BFS(pair<int, int> p) {
    queue<pair<int, int> > q;
    dis[p.first][p.second] = 0;
    visited[p.first][p.second] = true;
    q.push(p);

    while(!q.empty()) {
        int cx = q.front().first;
        int cy = q.front().second;
        q.pop();

        for(int i = 0; i < 8; i++) {
            int nx = cx + dx[i];
            int ny = cy + dy[i];

            if(nx >= 0 && ny >= 0 && nx < n && ny < n) {
                if(!visited[nx][ny]) {
                    visited[nx][ny] = true;
                    dis[nx][ny] = dis[cx][cy] + 1;
                    q.push(make_pair(nx, ny));
                }
            }
        }
    }   
}

void reset() { 
    int visited = { 0, };
    int dis = { 0, };
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int m, x, y;

    cin >> n >> m >> x >> y;

    for(int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;
        BFS(make_pair(x - 1, y - 1));
        result[i] = dis[a - 1][b -1];
    }

    for(int i = 0; i < m; i++){
        cout << result[i] << " ";
    }

    cout << "\n";


    return 0;
}