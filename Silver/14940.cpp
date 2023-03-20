#include <bits/stdc++.h>
#define MAX 1001

using namespace std;

int n, m;
int dx[4] = {0, 0, -1, 1};
int dy[4] = {-1, 1, 0, 0};
queue<pair<int, int> > q;
int dist[MAX][MAX];
bool visited[MAX][MAX];
int node[MAX][MAX];


void BFS(pair<int, int> p) {
    dist[p.first][p.second] = 0;
    visited[p.first][p.second] = true;
    q.push(p);

    while(!q.empty()) {
        pair<int, int> now = q.front();
        q.pop();

        for(int i = 0; i < 4; i++) {
            int nextX = now.first + dx[i];
            int nextY = now.second + dy[i];

            if(nextX < 0 || nextX >= n || nextY < 0 || nextY >= m) continue;
            if(node[nextX][nextY] == 0) continue;
            if(visited[nextX][nextY]) continue;

            q.push(make_pair(nextX, nextY));
            dist[nextX][nextY] = dist[now.first][now.second] + 1;
            visited[nextX][nextY] = true;
        }
    }


}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    pair<int, int> des;

    cin >> n >> m;

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cin >> node[i][j];

            if(node[i][j] == 2) {
                des.first = i;
                des.second = j;
            }
        }
    }

    BFS(des);

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++) {
            if(dist[i][j] == 0 && node[i][j] == 1){
                cout << -1 << " ";
            } else {
                cout << dist[i][j] << " ";
            }
        }
        cout << "\n";
    }
    return 0;
}