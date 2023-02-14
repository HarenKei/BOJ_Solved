#include <bits/stdc++.h>

using namespace std;

int node[51][51];
queue< pair<int, int> > q; // For BFS, first -> x, second -> y
bool visited[51][51]; 
int dx[8] = {0, 0, -1, 1, -1, -1, 1, 1}; //상, 하, 좌, 우, 좌상, 수하, 우상, 우하
int dy[8] = {-1, 1, 0, 0, -1, 1, -1, 1};
int w = 0, h = 0;

void BFS(int y, int x){
    visited[y][x] = true;
    q.push(make_pair(y, x));

    while(!q.empty()){
        int curY = q.front().first;
        int curX = q.front().second;
        q.pop();

        for(int i = 0; i < 8; i++){
            int nextY = curY + dy[i];
            int nextX = curX + dx[i];

            if(nextY < 0 || nextX < 0 || nextY >= h || nextX >= w) continue;
            if(node[nextY][nextX] && !visited[nextY][nextX]){
                visited[nextY][nextX] = true;
                q.push(make_pair(nextY, nextX));
            }
        }
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    while(1){
        int islandCnt = 0;
        cin >> w >> h;

        if(w == 0 && h == 0) break;;

        for(int i = 0; i < h; i++){
            for(int j = 0; j < w; j++){
                cin >> node[i][j]; 
            }
        }

        for(int i = 0; i < h; i++){
            for(int j = 0; j < w; j++){
                if(!visited[i][j] && node[i][j] == 1){
                    BFS(i, j);
                    islandCnt++;
                }
            }
        }

        cout << islandCnt << "\n";
        w = 0; h = 0;
        islandCnt = 0;
        memset(visited, false, sizeof(visited));
        memset(node, 0, sizeof(node));

    }


    return 0;
}