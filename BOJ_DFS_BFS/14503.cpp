#include <bits/stdc++.h>
#define MAX 51

using namespace std;

int n, m; //공간의 크기 n은 y크기, m은 x크기
int room[MAX][MAX]; //노드
int r, c, dire; //로봇청소기의 좌표, 방향
bool visited[MAX][MAX]; //청소(방문) 확인 배열
queue< pair<int, int> > q; //탐색용 큐
int dx[4] = {0, 1, 0, -1}; //x축 북 동 남 서
int dy[4] = {-1, 0, 1, 0}; //y축 북 동 남 서
int di[4] = {0, 1, 2, 3}; //청소기의 방향 북 동 남 서
int cnt = 0; //청소한 칸의 개수 

void BFS(int a, int b){ //a가 y축 b가 x축
    visited[a][b] = true;
    q.push(make_pair(a, b));

    while(!q.empty()){
        int curY = q.front().first;
        int curX = q.front().second;
        q.pop();
        cnt++; //현위치 청소
        //현재 방향을 기준으로 왼쪽 방향부터 탐색한다..
        for(int i = 0; i < 4; i++){
        }
        //DFS로 풀어야할듯.

    }
}

void DFS(int a, int b, int c){ //a가 북->남 b가 서->동 c가 로봇청소기 방향
    /*
        DFS
        1. 첫 노드 방문처리
        2. 다음 노드가 조건에 맞으면 재귀 호출
        현재 위치를 청소한다.
            현재 위치에서 현재 방향을 기준으로 왼쪽방향부터 차례대로 탐색을 진행한다.
            왼쪽 방향에 아직 청소하지 않은 공간이 존재한다면, 그 방향으로 회전한 다음 한 칸을 전진하고 1번부터 진행한다.
            왼쪽 방향에 청소할 공간이 없다면, 그 방향으로 회전하고 2번으로 돌아간다.
            네  방향 모두 청소가 이미 되어있거나 벽인 경우에는, 바라보는 방향을 유지한 채로 한 칸 후진을 하고 2번으로 돌아간다.
            네 방향 모두 청소가 이미 되어있거나 벽이면서, 뒤쪽 방향이 벽이라 후진도 할 수 없는 경우에는 작동을 멈춘다.


    */
    visited[a][b] = true; // 현재 위치를 청소한다
    cnt++; // 청소 카운트

    for(int i = 0; i < 4; i++){
        int nextR = (c + 3 - i) % 4;
    }
    
    for(int i = 0; i < node[start].size(); i++){
        int a = node[start][i];
        if(!visited[a]){
            DFS(a);
        }
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n >> m; //방의 크기
    cin >> r >> c >> dire; //로봇청소기가 있는 곳과 방향
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> room[i][j];
        }
    }

    BFS(r, c);

}