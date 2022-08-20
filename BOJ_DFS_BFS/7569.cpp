#include <bits/stdc++.h>
#define MAX 101

using namespace std;

int m, n, h; //m = x, n = y, h = z
int tomato[MAX][MAX][MAX];
int cnt = 0;
int dx[6] = {0, 0, -1, 1, 0, 0}; //상, 하, 좌, 우, 위, 아래
int dy[6] = {-1, 1, 0, 0, 0, 0};
int dz[6] = {0, 0, 0, 0, -1, 1}; 
queue< pair< pair<int, int>, int > > q; //{x, y}, z

void BFS(){
    while(!q.empty()){
        int curX = q.front().first.first;
        int curY = q.front().first.second;
        int curZ = q.front().second;
        q.pop();

        for(int i = 0; i < 6; i++){
            int nextX = curX + dx[i];
            int nextY = curY + dy[i];
            int nextZ = curZ + dz[i];

            if(nextX >= 0 && nextX < n && nextY >= 0 && nextY < m && nextZ >= 0 && nextZ < h){
                if(tomato[nextZ][nextX][nextY] == 0){
                    tomato[nextZ][nextX][nextY] = tomato[curZ][curX][curY] + 1;
                    q.push(make_pair(make_pair(nextX, nextY), nextZ));
                }
            }
        }
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> m >> n >> h;

    for(int z = 0; z < h; z++){
        for(int x = 0; x < n; x++){
            for(int y = 0; y < m; y++){
                cin >> tomato[z][x][y];

                if(tomato[z][x][y] == 1){
                    q.push(make_pair(make_pair(x, y), z));
                }
            }
        }
    }

    BFS();

    for(int z = 0; z < h; z++){
        for(int x = 0; x < n; x++){
            for(int y = 0; y < m; y++){
                if(tomato[z][x][y] == 0){
                    cout << -1 << '\n';
                    return 0;
                }
                if(tomato[z][x][y] > cnt){
                    cnt = tomato[z][x][y];
                }
            }
            
        }
    }

    cout << cnt -1 << '\n';

    return 0;
}