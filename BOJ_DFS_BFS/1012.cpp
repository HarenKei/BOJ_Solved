#include <bits/stdc++.h>
#define MAX 51

using namespace std;

int t, m, n, k; //테스트케이스, 가로, 세로, 배추 위치 개수
int cnt = 0; //필요한 흰지렁이 수
int field[MAX][MAX] = {0, }; //밭
bool visited[MAX][MAX]; //방문처리
queue< pair<int, int> > q; //BFS를 위한 큐
int dx[4] = {0, 0, -1, 1}; //x축, y축 방향 (상, 하 , 좌, 우)
int dy[4] = {-1, 1, 0, 0};

void reset(){
    m = 0;
    n = 0;
    k = 0;
    cnt = 0;
    memset(field, 0, sizeof(field));
    memset(visited, false, sizeof(visited));
}

void BFS(int x, int y){
    q = queue< pair<int, int> >();
    visited[x][y] = true;
    q.push(make_pair(x, y));

    while (!q.empty()){
        int curX = q.front().first;
        int curY = q.front().second;
        q.pop();

        for(int i = 0; i < 4; i++){
            int nextX = curX + dx[i];
            int nextY = curY + dy[i];

            if(nextX < 0 || nextX >= m || nextY < 0 || nextY >= n) continue;

            if(!visited[nextX][nextY] && field[nextX][nextY]){
                visited[nextX][nextY] = true;
                q.push(make_pair(nextX, nextY));
            }
        }
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> t;

    while(t--){
        cin >> m >> n >> k;

        for(int i = 0; i < k; i++){
            int x, y;
            cin >> x >> y;
            field[x][y] = 1; //배추가 있다고 표시
        }

        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                if(!visited[i][j] && field[i][j] == 1){ //아직 방문하지 않았고, 배추가 심어진 곳이면 탐색
                    cnt++;
                    BFS(i, j);
                }
            }
        }
        cout << cnt << '\n';
        reset();
    }
    return 0;
}

/*
1
5 3 6
0 2
1 2
2 2
3 2
4 2
4 0
*/