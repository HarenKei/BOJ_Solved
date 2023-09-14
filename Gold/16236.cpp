#include <bits/stdc++.h>
#define MAX 21

using namespace std;

struct Shark {
    int sx;
    int sy;
    int size;
};

int n, ans = 0;
int MAP[MAX][MAX];
int dx[4] = {0, 0, -1, 1};
int dy[4] = {-1, 1, 0, 0};
int ateFish;
Shark shark;

bool BFS(int x, int y) {
    queue<pair<pair<int, int>, int>> q;
    bool visited[MAX][MAX] = {false};
    vector<pair<int, pair<int, int>>> fish;

    q.push({{x, y}, 0});

    while(!q.empty()) {
        //현재 상어의 x좌표, y좌표 그리고 이동한 시간
        int cx = q.front().first.first;
        int cy = q.front().first.second;
        int cTime = q.front().second;
        q.pop();

        for(int i = 0; i < 4; i++) {
            int nx = cx + dx[i];
            int ny = cy + dy[i];

            if(nx < 0 || nx >= n || ny < 0 || ny >= n) continue;

            if(MAP[nx][ny] <= shark.size && !visited[nx][ny]) {
                q.push({{nx, ny}, cTime + 1});
                visited[nx][ny] = true;

                if(MAP[nx][ny] > 0 && MAP[nx][ny] < shark.size) {
                    fish.push_back({cTime + 1, {nx, ny}});
                }
            }
        }
    }

    if(fish.empty()) return false;
    else {
        sort(fish.begin(), fish.end());
        shark.sx = fish[0].second.first;
        shark.sy = fish[0].second.second;
        ateFish++;
        ans += fish[0].first;

        if(ateFish == shark.size) {
            shark.size++;
            ateFish = 0;
        }
        MAP[shark.sx][shark.sy] = 0;
        return true;
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    shark.size = 2;
    cin >> n;

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cin >> MAP[i][j];
            if(MAP[i][j] == 9) {
                shark.sx = i;
                shark.sy = j;
                MAP[i][j] = 0;
            }
        }
    }

    while(true) {
        bool flag = BFS(shark.sx, shark.sy);
        if(!flag) break;
    }

    cout << ans << "\n";

    return 0;
}
