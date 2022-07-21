#include <bits/stdc++.h>
#define MAX 26

using namespace std;

int n; //지도의 크기
vector<int> house[MAX]; //지도를 받는다.
vector<int> danji; //단지 개수와 단지별 가구 수 저장.
queue< pair<int, int> > q; //bfs를 위한 큐
bool visited[MAX][MAX];
int cnt;
int dx[4] = {0, 0, -1, 1}; //x축 상하좌우
int dy[4] = {-1, 1, 0, 0}; //y축 상하좌우

bool check(int a, int b){
    if(a < 0 || a >= n || b < 0 || b >= n)
        return false;
    if(visited[a][b]) //방문했을 때
        return false;
    if(house[a][b] == 0) //벽일때
        return false;
    
    return true;
}

void BFS(int x, int y){
    visited[x][y] = true;
    q.push(make_pair(x, y)); //좌표를 방문처리, 큐에 삽입
    cnt++;

    while(!q.empty()){
        int curX = q.front().first;
        int curY = q.front().second;
        q.pop();

        for(int i = 0; i < 4; i++){
            int nextX = curX + dx[i];
            int nextY = curY + dy[i];

            if(check(nextX, nextY)){
                q.push(make_pair(nextX, nextY));
                visited[nextX][nextY] = true;
                cnt++;
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
        string str; //미로 한줄
        cin >> str;
        for(int j = 0; j < str.length(); j++){
            house[i].push_back(str[j] - '0'); // 정수로 바꿔서 넣음
        }
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(house[i][j] == 1 && visited[i][j] == false){
                cnt = 0;
                BFS(i, j);
                danji.push_back(cnt);
            }
        }
    }

    sort(danji.begin(), danji.end());

    cout << danji.size() << '\n';
    for(int i = 0; i < danji.size(); i++){
        cout << danji[i] << '\n';
    }

    return 0;
}