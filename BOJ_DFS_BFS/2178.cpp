#include <bits/stdc++.h>

using namespace std;

int n, m;
vector<int> maze[101]; // 미로 저장용 벡터
bool visited[101][101]; // 방문 체크용 배열
queue< pair<int, int> > q; // 좌표값을 저장할 생각이기에 pair 템플릿
vector<int> dist[101];

bool check(int x, int y){
    if(y < 1 || y > n || x < 1 || x > m) //시작점보다 전이거나 도착점보다 뒤일때
        return false;
    if(visited[x][y]) //방문했을 때
        return false;
    if(maze[x][y] == 0) //벽일때
        return false;
   
   return true;
}

void BFS(int x, int y){
    visited[x][y] = true; //방문처리
    q.push(make_pair(x, y)); //좌표를 큐에 삽입
    dist[x][y]++; // 해당 좌표의 거리 (Li)를 표기

    while(!q.empty()){
        int curX = q.front().first;
        int curY = q.front().second;
        q.pop();

        //상
        if(check(curX, curY - 1)){
            visited[curX][curY - 1] = true;
            q.push(make_pair(curX, curY - 1));
            dist[curX][curY - 1] = dist[x][y] + 1;
        }
        //하
        if(check(curX, curY + 1)){
            visited[curX][curY + 1] = true;
            q.push(make_pair(curX, curY + 1));
            dist[curX][curY + 1] = dist[x][y] + 1;
        }
        //좌
        if(check(curX - 1, curY)){ 
            visited[curX - 1][curY] = true;
            q.push(make_pair(curX - 1, curY));
            dist[curX - 1][curY] = dist[x][y] + 1;
        }
        //우
        if(check(curX + 1,curY)){
            visited[curX + 1][curY] = true;
            q.push(make_pair(curX + 1, curY));
            dist[curX + 1][curY] = dist[x][y] + 1;
        }
    }

}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n >> m;

    for(int i = 0; i < n; i++){
        string str; // 가로줄을 문자열로 받자
        cin >> str;
        
        for(int j = 0; j < str.length(); j++){
            maze[i].push_back(str[j] - '0'); //문자를 숫자로 변환해서 벡터에 저장.
        }
    }
    
    BFS(0, 0);

    cout << dist[n][m];
   

    return 0;
}