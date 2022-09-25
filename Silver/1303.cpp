#include <bits/stdc++.h>
#define MAX 101

using namespace std;

int n, m; //n이 가로, m이 세로
int army[MAX][MAX];
bool visited[MAX][MAX];
int dirX[4] = {1, -1, 0, 0}; //동서남북
int dirY[4] = {0, 0, 1, -1};
queue< pair<int, int> > q;
int cntW, cntB;

int BFS(int y, int x){ 
    int cnt = 1;
    int chk = army[y][x];
    q.push(make_pair(y, x));
    visited[y][x] = true;

    while(!q.empty()){
        int curX = q.front().second;
        int curY = q.front().first;
        q.pop();

        for(int i = 0; i < 4; i++){
            int nextX = curX + dirX[i];
            int nextY = curY + dirY[i];

            if(nextX < 0 || nextX >= n || nextY < 0 || nextY >=m) continue;
            if(!visited[nextY][nextX] && army[nextY][nextX] == chk){
                q.push(make_pair(nextY, nextX));
                cnt++;
                visited[nextY][nextX] = true;
            }
        }
    }
    return cnt * cnt;    
}


int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    cin >> n >> m;

    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            char input;
            cin >> input;
            if(input == 'W') army[i][j] = 1;
        }
    }

    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            if(!visited[i][j]){
                if(army[i][j] == 1) cntW += BFS(i, j);
                else cntB += BFS(i, j);
            }
        }
    }

    cout << cntW << " " << cntB << '\n';

    return 0;
}