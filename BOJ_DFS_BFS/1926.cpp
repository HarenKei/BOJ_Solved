#include <bits/stdc++.h>
#define MAX 501

using namespace std;

int n, m;
int paint[MAX][MAX];
bool visited[MAX][MAX];
queue< pair<int, int> > q;
int paintCnt; //그림의 개수
int area; //그림의 넓이
int maxArea = -1;
int dx[4] = {0, 0, -1, 1}; //x축 상하좌우
int dy[4] = {-1, 1, 0, 0}; //y축 상하좌우

bool check(int a, int b){
    if(a < 0 || a >= n || b < 0 || b >= m)
        return false;
    if(visited[a][b]) //방문했을 때
        return false;
    if(paint[a][b] == 0)
        return false;
    
    return true;
}

int BFS(int y, int x){
    int cnt = 1;

    while(!q.empty()){
        int curY = q.front().first;
        int curX = q.front().second;
        q.pop();
       

        for(int i = 0; i < 4; i++){
            int nextY = curY + dy[i]; //상하좌우 인접 노드 탐색
            int nextX = curX + dx[i];

            if(check(nextX, nextY)){
                visited[nextX][nextY] = true;
                q.push(make_pair(nextX, nextY));
                cnt++;
            } else{
                continue;
            }
        }
    }

    return cnt;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n >> m;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> paint[i][j];
        }
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            
            if(!visited[i][j] && paint[i][j] == 1){
                visited[i][j] = true;
                paintCnt++;
                area = BFS(i, j);
                if(area > maxArea)
                    maxArea = area;
            }

        }
    }
    cout << paintCnt << '\n' << maxArea;



    return 0;

}
/*
6 5
1 1 0 1 1
0 1 1 0 0
0 0 0 0 0
1 0 1 1 1
0 0 1 1 1
0 0 1 1 1
*/