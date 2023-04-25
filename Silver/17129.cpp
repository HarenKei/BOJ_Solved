#include <bits/stdc++.h>
#define MAX 3001

using namespace std;

int n, m, sx, sy;;
char MAP[MAX][MAX];
int dist[MAX][MAX];
int dx[4] = {0, 0, -1, 1};
int dy[4] = {-1, 1, 0, 0};
queue<pair<int, int> > q;

int BFS() {
    dist[sx][sy] = 0;
    q.push(make_pair(sx, sy));

    while(!q.empty()) {
        int curX = q.front().first;
        int curY = q.front().second;
        q.pop();

        if(MAP[curX][curY] > '2') return dist[curX][curY];
    

        for(int i = 0; i < 4; i++) {
            int nX = curX + dx[i];
            int nY = curY + dy[i];

            if(nX >= 0 && nY >= 0 && nX < n && nY < m) {
                if(MAP[nX][nY] != '1' && dist[nX][nY] == 0) {
                    dist[nX][nY] = dist[curX][curY] + 1;
                    q.push(make_pair(nX, nY));
                }
            }
        }
    }
    return -1;

}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n >> m;
    
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cin >> MAP[i][j];
            if(MAP[i][j] == '2') {
                sx = i;
                sy = j;
            }
        }
    }

    int ans = BFS();
    if(ans == -1) cout << "NIE\n";
    else cout << "TAK\n" << ans << "\n";



    return 0;
}