#include <bits/stdc++.h>
#define MAX 100

using namespace std;

int n;
string color[MAX];
int dx[4] = {0, 0, -1, 1};
int dy[4] = {-1, 1, 0, 0};
queue< pair<int, int> > q;
bool visited[MAX][MAX];
int result1, result2;

void BFS(int x, int y){
    int cnt = 0;
    visited[x][y] = true;
    q.push(make_pair(x, y));
    
    while(!q.empty()){
        int curX = q.front().first;
        int curY = q.front().second;
        q.pop();
        
        for(int i = 0; i < 4; i++){
            int nextX = curX + dx[i];
            int nextY = curY + dy[i];

            if(nextX >= 0 && nextX < n && nextY >= 0 && nextY < n){
                if(!visited[nextX][nextY]){
                    if(color[nextX][nextY] == color[x][y]){
                        visited[nextX][nextY] = true;
                        q.push(make_pair(nextX, nextY));
                    }   
                }
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
        cin >> color[i];
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(!visited[i][j]){
                BFS(i,j);
                result1++;
            }
        }
    }
    
    cout << result1 << " ";

    memset(visited, false, sizeof(visited));

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(color[i][j] == 'R') color[i][j] = 'G';
        }
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(!visited[i][j]){
                BFS(i,j);
                result2++;
            }
        }
    }

    cout << result2 << '\n';

    return 0;
}