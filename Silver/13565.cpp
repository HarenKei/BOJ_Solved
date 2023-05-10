#include <bits/stdc++.h>
#define MAX 1001

using namespace std;

int m, n;
vector<string> MAP;
bool visited[MAX][MAX];
int dx[4] = {0, 0, -1, 1};
int dy[4] = {-1, 1, 0, 0};
queue< pair<int, int> > q;
string ans = "NO";

void BFS(pair<int, int> p){
    visited[p.first][p.second] = true;
    q.push(p);

    while(!q.empty()) {
        int cx = q.front().first;
        int cy = q.front().second;
        q.pop();

        for(int i = 0; i < 4; i++) {
            int nx = cx + dx[i];
            int ny = cy + dy[i];

            if(nx >= 0 && nx < m && ny >= 0 && ny < n) {
                if(!visited[nx][ny] && MAP[nx][ny] == '0'){
                    visited[nx][ny] = true;
                    q.push(make_pair(nx, ny));
                }
            }
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> m >> n;

    for(int i = 0; i < m; i++) {
        string str;
        cin >> str;
        MAP.push_back(str);
    }
    

    for(int i = 0; i < n; i++) {
        if(MAP[0][i] == '0' && !visited[0][i]) {
            BFS(make_pair(0, i));
        }
    }

    for(int i = 0; i < n; i++) {
        if(visited[m - 1][i]) {
            ans = "YES";
        }
    }


    cout << ans << "\n";

    return 0;
}