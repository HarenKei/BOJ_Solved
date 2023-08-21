#include<bits/stdc++.h>

using namespace std;

int r, c, ans;
char MAP[21][21];
bool alphabet[26]; // - 65
int dx[4] = {0, 0, -1 , 1};
int dy[4] = {-1, 1, 0, 0};

void DFS(int x, int y, int depth) {
    ans = max(ans, depth);

    for(int i = 0; i < 4; i++) {
        int nx = x + dx[i];
        int ny = y + dy[i];
        int nxtAlphabet = MAP[nx][ny] - 65;

        if(nx < 0 || nx >= r || ny < 0 || ny >= c) continue;

        if(!alphabet[nxtAlphabet]) {
            alphabet[nxtAlphabet] = true;
            DFS(nx, ny, depth + 1);
            alphabet[nxtAlphabet] = false;
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> r >> c;

    for(int i = 0; i < r; i++) {
        string input;
        cin >> input;

        for(int j = 0; j < c; j++) {
            MAP[i][j] = input[j];
        }
    }

    alphabet[MAP[0][0] - 65] = true;
    DFS(0, 0, 1);

    cout << ans << "\n";

    return 0;
}
