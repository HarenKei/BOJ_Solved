#include <bits/stdc++.h>
#define MAX 101

using namespace std;

int n, ans = 987654321;
int label = 1;
int MAP[MAX][MAX];
int dx[4] = {0, 0, -1, 1};
int dy[4] = {-1, 1, 0, 0};
bool visited[MAX][MAX];
vector<pair<int, int>> land;

void BFS_Label(int x, int y, int l) {
    //대륙별 라벨링용 BFS
    queue<pair<int, int>> q;

    visited[x][y] = true;
    MAP[x][y] = l; //탐색 시작 지점을 l로 라벨링.
    q.push({x, y});

    while(!q.empty()) {
        int cx = q.front().first;
        int cy = q.front().second;
        q.pop();

        for(int i = 0; i < n; i++) {
            int nx = cx + dx[i];
            int ny = cy + dy[i];

            if(nx < 0 || nx >= n || ny < 0 || ny >= n) continue;

            if(!visited[nx][ny] && MAP[nx][ny] == -1) {
                //다음 탐색지점이 탐색되지 않았고, 육지라면 라벨링한다
                visited[nx][ny] = true;
                MAP[nx][ny] = l;
                q.push({nx, ny});
            }
        }
    }
}

int BFS(int labelNum) {
    //라벨링한 번호들을 통한 BFS
    int res = 0;
    queue<pair<int, int>> q;

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(MAP[i][j] == labelNum) {
                //전체 좌표를 탐색하며 현재 파라미터로 들어온 라벨의 대륙이 발견되면 큐에 담아 탐색 대상으로 삼는다.
                visited[i][j] = true;
                q.push({i, j});
            }
        }
    }

    while(!q.empty()) {
        int s = q.size();
        //큐 사이즈만큼 해당 라벨의 대륙의 육지가 있다.

        for(int i = 0; i < s; i++) {
            int cx = q.front().first;
            int cy = q.front().second;
            q.pop();

            for(int j = 0; j < 4; j++) {
                int nx = cx + dx[j];
                int ny = cy + dy[j];

                if(nx < 0 || nx >= n || ny < 0 || ny >= n) continue;
                
                //톰상적으로 BFS를 수행한다.
                //다음 탐색 좌표가 육지이면서 현재 탐색중인 대륙과 다른 대륙이라면 다리가 이어진 것이므로 현재까지의 다리 길이를 리턴한다.
                if(MAP[nx][ny] != 0 && MAP[nx][ny] != labelNum) return res;
                else if(MAP[nx][ny] == 0 && !visited[nx][ny]) {
                    //만약 다음 탐색 좌표가 육지가 아니면서 방문하지 않았다면 다리를 놓을 수 있으므로 큐에 넣어 탐색한다.
                    visited[nx][ny] = true;
                    q.push({nx, ny});
                }
            }
        }
        res++;
        //각 육지별로 탐색후 다리 길이 증가.
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> n;

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cin >> MAP[i][j];

            if(MAP[i][j] == 1) {
                MAP[i][j] = -1;
                land.push_back({i, j});
            }
            //대륙별 라벨링을 위해 -1로 초기화하며 육지들의 좌표를 별도로 저장한다.
        }
    }

    for(auto i : land) {
        //모든 육지에 대해 라벨링을 실시한다.
        //한 대륙의 라벨링이 끝나면 라벨 번호를 1 증가한다.
        int x = i.first;
        int y = i.second;

        if(!visited[x][y]) {
            BFS_Label(x, y, label);
            label++;
        }
    }

    for(int i = 1; i < label; i++) {
        //1번 대륙부터 탐색하여 더 짧은 길이의 다리 길이를 갱신한다.
        //추후 탐색을 위해 방문 기록을 초기화한다.
        ans = min(ans, BFS(i));
        memset(visited, false, sizeof(visited));
    }

    cout << ans << "\n";

    return 0;
}
