#include <bits/stdc++.h>

using namespace std;


int t,h,w, cnt = 0;
char MAP[101][101];
bool visited[101][101];
queue< pair<int, int> > q;
int dx[4] = {0, 0, -1, 1};
int dy[4] = {-1, 1, 0, 0};

void BFS(pair<int, int> p){
    visited[p.first][p.second] = true;
    q.push(p);

    while(!q.empty()) {
        int curX = q.front().first;
        int curY = q.front().second;
        q.pop();
        

        for(int i = 0; i < 4; i++) {
            int nextX = curX + dx[i];
            int nextY = curY + dy[i];

            if(nextX >= 0 && nextX < h && nextY >= 0 && nextY < w) {
                if(!visited[nextX][nextY] && MAP[nextX][nextY] == '#'){
                    visited[nextX][nextY] = true;
                    q.push(make_pair(nextX, nextY));
                }
            } 
        }
    }
}


int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> t;
    
    while(t--) {
        cnt = 0;
        h = 0; w = 0;
        memset(MAP, ' ', sizeof(MAP));
        memset(visited, false, sizeof(visited));

        
        cin >> h >> w;

        for(int i = 0 ; i < h; i++) {
            for(int j = 0; j < w; j++) {
                cin >> MAP[i][j];
            }
        }

        for(int i = 0; i < h; i++) {
            for(int j = 0; j < w; j++) {
                if(!visited[i][j] && MAP[i][j] == '#') {
                    BFS(make_pair(i, j));
                    cnt++;
                }
            }
        }

        cout << cnt << "\n";
    }

    return 0;
}