#include <bits/stdc++.h>
#define MAX 101

using namespace std;

int m, n, k; //m -> y, n -> x, k는 직사각형의 개수
bool visited[MAX][MAX] = {false, }; //visited[n][m] -> x, y
int node[MAX][MAX] = {0, }; //node[n][m] -> x, y
int dx[4] = {0, 0, -1, 1}; //x축, y축 인접 노드 탐색 위한 방향 / 상 하 좌 우 순
int dy[4] = {-1, 1, 0, 0};
int areaCnt = 0;
vector<int> area; //영역의 개수와 너비 저장용 벡터
queue< pair<int, int> > q; // BFS용 큐


void BFS(int x, int y){
    areaCnt++;
    visited[x][y] = true; //방문체크
    q.push(make_pair(x, y));

    while(!q.empty()){
        int curX = q.front().first;
        int curY = q.front().second;
        q.pop();

        for(int i = 0; i < 4; i++){
            int nextX = curX + dx[i];
            int nextY = curY + dy[i];

            if(nextX < 0 || nextX >= n || nextY < 0 || nextY >= m) continue;

            if(!visited[nextX][nextY] && node[nextX][nextY] == 0){
                areaCnt++;
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

    cin >> m >> n >> k;

    for(int i = 0; i < k; i++){
        int x1, x2, y1, y2;
        cin >> x1 >> y1 >> x2 >> y2;

        for(int j = x1; j < x2; j++){ //좌표 A에서 B까지의 영역을 방문표시
            for(int k = y1; k < y2; k++){
                node[j][k] = 1;
            }
        }
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(!visited[i][j] && node[i][j] == 0){
                areaCnt = 0;
                BFS(i, j);
                area.push_back(areaCnt);
                
            }

        }
    }

    sort(area.begin(), area.end());

    cout << area.size() << endl;
    
    for(int i = 0; i < area.size(); i++){
        cout << area[i] << " ";
    }

    return 0;
}

/*
5 7 3
0 2 4 4
1 1 2 5
4 0 6 2

-> 
3
1 7 13
*/
