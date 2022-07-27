#include <bits/stdc++.h>
#define MAX 51

using namespace std;

int N, M; //N이 y축, M이 x축
int r, c, d; //d가 0-북, 1-동, 2-남, 3-서
int home[MAX][MAX]; //첫 행, 마지막 행, 첫 열, 마지막 열의 모든 칸은 '벽'
bool visited[MAX][MAX];
int cnt = 0;
int dc[4] = {0, 1, 0, -1}; //북동남서 순서
int dr[4] = {-1, 0, 1, 0};
queue< pair<int, int> > q;

void DFS(int r, int c, int d){ //(r, c) == (y, x)
    bool flag = false;
    

    //2.현재 위치에서 현재 방향을 기준으로 왼쪽 방향부터 차례대로 탐색을 진행한다.
    for(int i = 0; i < 4; i++){
        int nextD = (d + 3 - i) % 4;
        int nextR = r + dr[nextD];
        int nextC = c + dc[nextD];

        if(nextR <= 0 || nextR >= N || nextC <= 0 || nextC >= M || home[nextR][nextC] == 1) //다음 x, y 좌표가 범위 내에 없는 경우 패스
            continue;
        if(home[nextR][nextC] != 1 && !visited[nextR][nextC]){ 
            //2-1. 왼쪽 방향에 아직 청소하지 않은 공간이 존재한다면, 그 방향으로 회전한 다음 한 칸을 전진하고 1번부터 진행한다
            visited[nextR][nextC] = true;
            cnt++;
            flag = true;
            DFS(nextR, nextC, nextD); //그리고 그 지역에서 다시 탐색
            break;
        } 
    }

        //2-3. 네 방향 모두 청소가 이미 되어있거나 벽인 경우에는, 바라보는 방향을 유지한 채로 한 칸 후진을 하고 2번으로 돌아간다
        if(!flag){
            int idx = d + 2 < 4 ? d + 2 : d - 2;
            int backR = r + dr[idx];
            int backC = c + dc[idx];

            if(backR >= 0 || backR <= N || backC >= 0 || backC <= M){

                if(home[backR][backC] == 0){ // 후진 가능
                    DFS(backR, backC, d);
                } else {
                    //2-4. 네 방향 모두 청소가 이미 되어있거나 벽이면서, 뒤쪽 방향이 벽이라 후진도 할 수 없는 경우에는 작동을 멈춘다.
                    return;
                }
            }
        }

    
}


int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N >> M;
    cin >> r >> c >> d;
    
    for(int i = 0; i < N; i++ ){
        for(int j = 0; j < M; j++){
            cin >> home[i][j];
        }
    }

    visited[r][c] = true;
    cnt++;
    DFS(r, c, d);
    cout << cnt;

    return 0;

}