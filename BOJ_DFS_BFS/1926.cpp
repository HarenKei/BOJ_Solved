#include <bits/stdc++.h>
#define MAX 501

using namespace std;
//그림의 개수 -> 탐색시마다 카운트
//그림의 넓이 -> 탐색시마다 카운트 -> 한 번의 탐색 끝나면 초기화
int n, m;
int paint[MAX][MAX];
int cnt = 0; //그림의 개수
int maxArea = 0;
bool visited[MAX][MAX];
queue< pair<int, int> > q;
int dx[4] = {1, 0, -1, 0}; //x축 상하좌우
int dy[4] = {0, 1, 0, -1 }; //y축 상하좌우

int BFS(int y, int x){
    int area = 0;
    visited[y][x] = true;
    q.push(make_pair(y, x));
    area++;

    while(!q.empty()){
        int curY = q.front().first;
        int curX = q.front().second;
        q.pop();

        for(int i = 0; i < 4; i++){ //상하좌우 갈 수 있는 곳 탐색
            int nextY = curY + dy[i];
            int nextX = curX + dx[i];

            if(nextY < 0 || nextY >= n || nextX < 0 || nextX >= m) //범위 내에 없으면 continue
                continue;
            if(!visited[nextY][nextX] && paint[nextY][nextX] == 1){ //상하좌우 중 해당 좌표를 방문하지 않았고 해당 좌표가 그림인 경우
                visited[nextY][nextX] = true;
                area++;
                q.push(make_pair(nextY, nextX));
            }
        }
    }

    return area;
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
            if(paint[i][j] == 1 && !visited[i][j]){ //해당 좌표가 1(그림)이고 아직 방문하지 않은 곳일때...
                int tempArea;
                cnt++;
                tempArea = BFS(i, j);
                if(maxArea < tempArea)
                    maxArea = tempArea;
            }
        }
    }

    cout << cnt << '\n' << maxArea << '\n';

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