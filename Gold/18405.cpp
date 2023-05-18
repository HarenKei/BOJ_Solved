#include <bits/stdc++.h>

#define MAX 202

using namespace std;

struct Virus {
    int virusNum;
    int x;
    int y;
};

int n, k, s, x, y;
int MAP[MAX][MAX];
int dx[4] = {0, 0, -1, 1};
int dy[4] = {-1, 1, 0, 0};
vector<Virus> v;

bool cmp(Virus v1, Virus v2) {
    return v1.virusNum < v2.virusNum;
}

void BFS() {
    int vLen = v.size();

    for(int i = 0; i < vLen; i++) {
        Virus virus = v[i];

        for(int j = 0; j < 4; j++) {
            int nx = virus.x + dx[j];
            int ny = virus.y + dy[j];

            if(nx > n || ny > n || nx <= 0 || ny <= 0) continue;
            if(MAP[nx][ny] == 0) {
                MAP[nx][ny] = virus.virusNum;
                v.push_back({MAP[nx][ny], nx, ny});
            }
        }
    }
    v.erase(v.begin(), v.begin() + vLen);
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n >> k;

    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++) {
            cin >> MAP[i][j];

            if(MAP[i][j] != 0 && MAP[i][j] <= k) {
                v.push_back({MAP[i][j], i, j});
            }
        }
    }

    cin >> s >> x >> y;

    sort(v.begin(), v.end(), cmp);

    for(int i = 0; i < s; i++) {
        BFS();
    }

    cout << MAP[x][y] << "\n";

    return 0;
}
