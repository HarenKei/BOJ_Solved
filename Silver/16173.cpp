#include <bits/stdc++.h>

using namespace std;

int n;
int MAP[4][4];
bool visited[4][4];
int dx[2] = {1, 0};
int dy[2] = {0, 1};
queue< pair<int, int> > q;

void BFS(pair<int, int> p) {
    visited[p.first][p.second] = true;
    q.push(p);

    while(!q.empty()) {
        int curX = q.front().first;
        int curY = q.front().second;
        q.pop();

        if(MAP[curX][curY] == -1) return;

        for(int j = 0; j < 2; j++) {
            int nX = curX + dx[j] * MAP[curX][curY];
            int nY = curY + dy[j] * MAP[curX][curY];

            if(nX >= 0 && nY >= 0 && nX < n && nY < n) {
                if(!visited[nX][nY]){
                    visited[nX][nY] = true;
                    q.push(make_pair(nX, nY));
                }
            }
        }
        
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    cin >> n;

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cin >> MAP[i][j];
        }
    }

    BFS(make_pair(0, 0));

    if(!visited[n-1][n-1]) {
        cout << "Hing\n";
    } else {
        cout << "HaruHaru\n";
    }
    return 0;
}