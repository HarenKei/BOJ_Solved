#include <bits/stdc++.h>
#define MAX 101

using namespace std;

int n; //지역 크기
int maxZone = -1; //가장 높은 지대의 높이
int zone[MAX][MAX]; //지역의 높이를 받을 2차원 배열
vector<int> safeZone;
bool safe[MAX][MAX];
bool visited[MAX][MAX]; //방문체크
queue< pair<int, int> > q; //BFS용 큐
int dx[4] = {0, 0, -1, 1}; //상하좌우에 대한 x,y축의 이동거리
int dy[4] = {-1, 1, 0, 0};
int cnt = 0;

void BFS(int a, int b){
    visited[a][b] = true;
    q.push(make_pair(a, b));

    while(!q.empty()){
        int x = q.front().first;
        int y = q.front().second;
        q.pop();

        for(int i = 0; i < 4; i++){
            int nextX = x + dx[i];
            int nextY = y + dy[i];

            if(nextX < 0 || nextY < 0 || nextX >=n || nextY >= n) continue;

            if(safe[nextX][nextY] && !visited[nextX][nextY]){
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

    cin >> n;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> zone[i][j];
            if(zone[i][j] > maxZone){
                maxZone = zone[i][j];
            }
        }
    }

    for(int i = 0; i < maxZone; i++){

        for(int j = 0; j < n; j++){ //비의 양보다 높은 지대를 따로 빼기
            for(int k = 0; k < n; k++){
                if(zone[j][k] > i){ //현재 내리는 비의 높이보다 높은 지대
                    safe[j][k] = true; //잠기지 않는 지대 겟또
                } 
            }
        }

        for(int j = 0; j < n; j++){
            for(int k = 0; k < n; k++){
                if(safe[j][k] && !visited[j][k]){
                    BFS(j, k);
                    cnt++;
                }
            }
            safeZone.push_back(cnt);
        }

        memset(visited, false, sizeof(visited)); //방문체크 초기화
        memset(safe, false, sizeof(safe)); //해당 높이 안전지대 초기화
        cnt = 0; // 카운트 초기화

    }

    int result = *max_element(safeZone.begin(), safeZone.end());
    cout << result;

    return 0;
}

//memset(isVisit, false, sizeof(isVisit));