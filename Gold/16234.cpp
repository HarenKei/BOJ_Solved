#include<bits/stdc++.h>

using namespace std;

int n, l, r, ans = 0, sum = 0;
int MAP[51][51];
bool visited[51][51];
bool unionChk = true;
int dx[4] = {0, 0, -1, 1};
int dy[4] = {-1, 1, 0, 0};
queue<pair<int, int>> q;
vector<pair<int, int>> v;


void BFS(int x, int y) {
    visited[x][y] = true;
    q.push({x, y});
    
    sum = MAP[x][y];
    v.push_back({x, y});

    while(!q.empty()) {
        int cx = q.front().first;
        int cy = q.front().second;
        q.pop();

        for(int i = 0; i < 4; i++) {
            int nx = cx + dx[i];
            int ny = cy + dy[i];

            if(nx >= 0 && nx < n && ny >= 0 && ny < n && !visited[nx][ny]){
                if(abs(MAP[cx][cy] - MAP[nx][ny]) >= l && abs(MAP[cx][cy] - MAP[nx][ny]) <= r) {
                    visited[nx][ny] = true;
                    q.push({nx, ny});
                    v.push_back({nx, ny});
                    sum += MAP[nx][ny];
                }
            }
        }
    }



}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> n >> l >> r;

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cin >> MAP[i][j];
        }
    }

    ans = 0;
    while(unionChk) {
        //연합을 이룰 수 있다면 BFS를 돌린다.
        unionChk = false;
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++) {
                if(!visited[i][j]) {
                    v.clear();
                    BFS(i, j);
                }

                if(v.size() >= 2) {
                    unionChk = true;
                    int value = sum / v.size();
                    for(auto it = v.begin(); it != v.end(); it++) {
                        MAP[it->first][it->second] = value;
                    }
                }
            }
        }

        if(unionChk) ans++;
        memset(visited, false, sizeof(visited));
    }

    cout << ans << "\n";





    return 0;
}
