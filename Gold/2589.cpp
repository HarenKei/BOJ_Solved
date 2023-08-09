#include<bits/stdc++.h>

using namespace std;

int h, w;
char MAP[51][51];
bool visited[51][51];
int route[51][51];
queue<pair<int, int>> q;
pair<int, int> dist[4] = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
vector<int> ans;

int BFS(int y, int x) {
    int maxRoute = 0;
    route[y][x] = 0;
    visited[y][x] = true;
    q.push({y, x});

    while(!q.empty()) {
        int curY = q.front().first;
        int curX = q.front().second;
        q.pop();

        for(int i = 0; i < 4; i++) {
            int nxtY = curY + dist[i].first;
            int nxtX = curX + dist[i].second;

            if(!visited[nxtY][nxtX] && MAP[nxtY][nxtX] == 'L') {
                if(nxtY >= 0 && nxtY < h && nxtX >= 0 && nxtX < w) {
                    visited[nxtY][nxtX] = true;
                    q.push({nxtY, nxtX});
                    route[nxtY][nxtX] = route[curY][curX] + 1;

                    if(maxRoute <= route[nxtY][nxtX]){
                        maxRoute = route[nxtY][nxtX];
                    }
                }
            }
        }
    }

    return maxRoute;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> h >> w;

    for(int i = 0; i < h; i++) {
        for(int j = 0; j < w; j++) {
            cin >> MAP[i][j];
        }
    }

    for(int i = 0; i < h; i++) {
        for(int j = 0; j < w; j++) {
            if(MAP[i][j] == 'L') {
                ans.push_back(BFS(i, j));
            }

            memset(visited, false, sizeof(visited));
            memset(route, 0, sizeof(route));
        }
    }

    cout << *max_element(ans.begin(), ans.end());

    return 0;
}
