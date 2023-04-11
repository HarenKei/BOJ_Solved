#include <bits/stdc++.h>
#define MAX 100001

using namespace std;

int n, m, r;
vector<int> MAP[MAX];
bool visited[MAX];
queue<int> q;
int depth[MAX];

void BFS(int start) {
    memset(depth, -1, sizeof(depth));
    visited[start] = true;
    q.push(start);
    depth[start] = 0;

    while(!q.empty()) {
        int cur = q.front();
        q.pop();

        for(int i = 0; i < MAP[cur].size(); i++) {
            int next = MAP[cur][i];

            if(!visited[next] && next >= 1 && next <= n) {
                visited[next] = true;
                depth[next] = depth[cur] + 1;
                q.push(next);

            } 
        }
    }

}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n >> m >> r;

    for(int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
        MAP[u].push_back(v);
        MAP[v].push_back(u);
    }

    BFS(r);

    for(int i = 1; i <= n; i++){
        cout << depth[i] << " ";
    }

    cout << "\n";



    return 0;
}