#include <bits/stdc++.h>
#define MAX 101

using namespace std;

int r, c, result;
char MAP[MAX][MAX];
bool visited[MAX][MAX];
int dx[4] = {0, 0, -1, 1};
int dy[4] = {-1, 1, 0, 0};
queue<pair<int, int> > q;

void BFS(pair<int, int> p) {
    visited[p.first][p.second] = true;
    q.push(p);

    while(!q.empty()) {
        int curX = q.front().first;
        int curY = q.front().second;
        q.pop();

        for(int i = 0; i < 4; i++) {
            int nX = curX + dx[i];
            int nY = curY + dy[i];

            if(nX >= 0 && nY >= 0 && nX < r && nY < c) {
                if(!visited[nX][nY] && MAP[nX][nY] == '#') {
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

    cin >> r >> c;

    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            cin >> MAP[i][j];
        }
    }

    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            if(MAP[i][j] == '#' && !visited[i][j]) {
                result++;
                BFS(make_pair(i, j));
            }
        }
    }

    cout << result << "\n";

    return 0;
} 