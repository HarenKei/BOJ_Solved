#include <bits/stdc++.h>
#define MAX 251


using namespace std;

int r, c, kCnt, vCnt;
int dx[4] = {0, 0, -1, 1};
int dy[4] = {-1, 1, 0, 0};
char node[MAX][MAX];
bool visited[MAX][MAX];

queue<pair<int, int> > q;

void BFS(pair<int, int> p) {
    int curK = 0, curV = 0;
    q.push(p);
    visited[p.first][p.second] = true;

    if(node[p.first][p.second] == 'k') curK++;
    if(node[p.first][p.second] == 'v') curV++;

    while(!q.empty()) {
        int curX = q.front().first;
        int curY = q.front().second;
        q.pop();

        for(int i = 0; i < 4; i++) {
            int nextX = curX + dx[i];
            int nextY = curY + dy[i];

            if(nextX >= 0 && nextY >= 0 && nextX < r && nextY <c) {
                if(!visited[nextX][nextY]) {
                    if(node[nextX][nextY] == '.') {
                        //다음 노드가 이동 가능한 공간일 경우
                        visited[nextX][nextY] = true;
                        q.push(make_pair(nextX, nextY));
                    } else if(node[nextX][nextY] == 'k') {
                        //다음 노드에 양이 있을 경우
                        curK++;
                        visited[nextX][nextY] = true;
                        q.push(make_pair(nextX, nextY));
                    } else if(node[nextX][nextY] == 'v') {
                        //다음 노드에 늑대가 있을 경우
                        curV++;
                        visited[nextX][nextY] = true;
                        q.push(make_pair(nextX, nextY));
                    }
                }
            }
        }

    }
    //양이 늑대보다 많은 경우
    if(curK > curV) kCnt += curK;
    else vCnt += curV;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> r >> c;

    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            cin >> node[i][j];
        }
    }

    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            if(node[i][j] == '#') continue;
            if(!visited[i][j]) {
                BFS(make_pair(i, j));
            }
        }
    }

    cout << kCnt << " " << vCnt << "\n";

    return 0;
}