#include <bits/stdc++.h>

using namespace std;

int n, m; // n : 세로 m : 가로
char field[50][50];
int visited[50][50];

void dfs(int cnt, int r, int c) {
    visited[r][c] = cnt;

    if(field[r][c] == '-') {
        if(c + 1 < m && field[r][c+1] == '-') {
            dfs(cnt, r, c+1);
        }
    } else {
        if(r + 1 < n && field[r + 1][c] == '|') {
            dfs(cnt, r + 1, c);
        }
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int ans = 0;

    cin >> n >> m;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> field[i][j];
        }
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++) {
            if(!visited[i][j]) {
                ans++;
                dfs(ans, i , j);
            }
        }
    }

    cout << ans << endl;
    
    return 0;
}