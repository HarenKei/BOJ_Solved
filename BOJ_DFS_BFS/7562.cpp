#include <bits/stdc++.h>
#define MAX 301

using namespace std;

int t, lenChess; 
int kx, ky, nkx, nky; //knightx, y / nextKnightx, y
int chess[MAX][MAX];
bool visitied[MAX][MAX];
int dx[8] = {-2, -2, 2, 2, -1, -1, 1, 1};
int dy[8] = {-1, 1, -1, 1, -2, 2, -2, 2};
queue< pair<int, int> > q;

void BFS(int x, int y){
    visitied[x][y] = true;
    q.push(make_pair(x, y));

    while(!q.empty()){
        int curX = q.front().first;
        int curY = q.front().second;
        q.pop();

        if(curX == nkx && curY == nky){
                cout << chess[curX][curY] << '\n';

                while(!q.empty()){
                    q.pop();
                }
                break;
        }

        for(int i = 0; i < 8; i++){
            int nextX = curX + dx[i];
            int nextY = curY + dy[i];

            

            if(nextX >= 0 && nextX < lenChess && nextY >= 0 && nextY < lenChess){
                if(!visitied[nextX][nextY]){
                    chess[nextX][nextY] = chess[curX][curY] + 1;
                    visitied[nextX][nextY] = true;
                    q.push(make_pair(nextX, nextY));
                }
            }
        }
        
    }

}

void reset(){
    memset(chess, 0, sizeof(chess));
    memset(visitied, false, sizeof(visitied));
    lenChess = 0; kx = 0; ky = 0; nkx = 0; nky = 0;
}


int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> t;
    
    while(t--){
        
        cin >> lenChess;
        
        cin >> kx >> ky >> nkx >> nky;

        BFS(kx, ky);

        reset();
    }
    
    return 0;
}