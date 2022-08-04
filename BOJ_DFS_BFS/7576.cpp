#include <bits/stdc++.h>
#define MAX 1001

using namespace std;

int m, n; //m = x, n = y
int tomato[MAX][MAX];
int cnt = 0;
int dx[4] = {0, 0, -1, 1};
int dy[4] = {-1, 1, 0, 0};
queue< pair<int, int> > q;

void BFS(){
    while(!q.empty()){
        int curX = q.front().first;
        int curY = q.front().second;
        q.pop();

        for(int i = 0; i < 4; i++){
            int nextX = curX + dx[i];
            int nextY = curY + dy[i];

            if(nextX >= 0 && nextX < n && nextY >= 0 && nextY < m){
                if(tomato[nextX][nextY] == 0){
                    tomato[nextX][nextY] = tomato[curX][curY] + 1;
                    q.push(make_pair(nextX, nextY));
                }
            }
        }
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> m >> n;
    
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> tomato[i][j];

            if(tomato[i][j] == 1){
                q.push(make_pair(i, j));
            }
        }
    }

    BFS();

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(tomato[i][j] == 0){
                cout << -1 << '\n';
                return 0;
            }
            if(tomato[i][j] > cnt){
                cnt = tomato[i][j];
            }
        }
    }

    cout << cnt -1 << '\n';

    return 0;
}