#include <bits/stdc++.h>

using namespace std;

int n, m;
vector<int> MAP[101];
bool visited[101];
int result[101][101];
queue<int> q;

void BFS(int start) {
    visited[start] = true;
    q.push(start);

    while(!q.empty()) {
        int cur = q.front();
        q.pop();

        for(int i = 0; i < MAP[cur].size(); i++) {
            int next = MAP[cur][i];

            if(!visited[next]) {
                visited[next] = true;
                q.push(next);

                result[start][next] = result[start][cur] + 1;
                result[next][start] = result[cur][start] + 1;

            }
        }
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n >> m;

    for(int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;
        MAP[a].push_back(b);
        MAP[b] .push_back(a);
    }

    memset(result, 0, sizeof(result));

    for(int i = 1; i <= n; i++) {
        memset(visited, false, sizeof(visited));
        BFS(i);
    }

    int sum = 0, min = 2000000000, ans = 0;

    for(int i = 1; i <= n; i++) {
        sum = 0;
        for(int j = 1; j <= n; j++) {
            sum += result[i][j];
        }

        if(min > sum) {
            min = sum;
            ans = i;
        }
    }

    cout << ans << "\n";

    return 0;
} 