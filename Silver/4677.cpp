#include <bits/stdc++.h>

using namespace std;

int x, y, ans = 0;
pair<int, int> dir[8] ={{0, -1}, {0, 1}, {-1, 0}, {1, 0}, {-1, -1}, {1, -1}, {-1, 1}, {1, 1}};
char MAP[101][101];
bool visited[101][101];
queue<pair<int, int>> q;

void BFS(pair<int, int> p) {
    visited[p.first][p.second] = true;
    q.push(p);

    while(!q.empty()) {
        int cx = q.front().first;
        int cy = q.front().second;
        q.pop();

        for(int i = 0; i < 8; i++) {
            int nx = cx + dir[i].first;
            int ny = cy + dir[i].second;

            if(nx >= 0 && nx < x && ny >= 0 && ny < y ) {
                if(!visited[nx][ny] && MAP[cx][cy] == MAP[nx][ny]) {
                    visited[nx][ny] = true;
                    q.push({nx, ny});
                }
            }
        }
    }


}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);



    while(1) {
        x = 0;
        y = 0;
        ans = 0;
        memset(visited, false, sizeof(visited));
        memset(MAP, ' ', sizeof(MAP));

        cin >> x >> y;

        if(x == 0 && y == 0) break;

        for(int i = 0; i < x; i++) {
            for(int j = 0; j < y; j++) {
                cin >> MAP[i][j];
            }
        }

        for(int i = 0; i < x; i++) {
            for(int j = 0; j < y; j++) {
               if(MAP[i][j] == '@' && !visited[i][j]) {
                   BFS({i,j});
                   ans++;
               }
            }
        }

        cout << ans << "\n";
    }



    return 0;
}
