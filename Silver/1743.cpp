#include <bits/stdc++.h>
#define MAX 101

using namespace std;

int n, m, k, cnt;
int MAP[MAX][MAX];
bool visited[MAX][MAX];
int dx[4] = {0, 0, -1, 1};
int dy[4] = {-1, 1, 0, 0};
vector<int> result;
queue<pair<int, int> > q;

void BFS(pair<int, int> p) {
    cnt = 0;
    visited[p.first][p.second] = true;
    q.push(p);

    while(!q.empty()) {
        int cx = q.front().first;
        int cy = q.front().second;
        q.pop();
        cnt++;

        for(int i = 0; i < 4; i++) {
            int nx = cx + dx[i];
            int ny = cy + dy[i];

            if(nx >= 0 && ny >= 0 && nx < n && ny < m) {
                if(!visited[nx][ny] && MAP[nx][ny] == 1) {
                    visited[nx][ny] = true;
                    q.push(make_pair(nx, ny));
                }
            }
        }
    }
}


int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    cin >> n >> m >> k;

    for(int i = 0; i < k; i++) {
        int r, c;
        cin >> r >> c;
        MAP[r-1][c-1] = 1;
    }


    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            if(MAP[i][j] == 1 && !visited[i][j]) {
                BFS(make_pair(i, j));
                result.push_back(cnt);
                cnt = 1;
            }
        }
    }

    cout << *max_element(result.begin(), result.end()) << "\n";

    return 0;
}