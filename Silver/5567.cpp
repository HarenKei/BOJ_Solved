#include <bits/stdc++.h>

using namespace std;

int n, m, ans = 0;
vector<int> friends[10001];
int visited[501];
queue<int> q;

void BFS(int start){
    visited[start] = 1;
    q.push(start);

    while(!q.empty()) {
        int cur = q.front();
        q.pop();

        for(int i = 0; i < friends[cur].size(); i++) {
            int next = friends[cur][i];

            if(visited[next] == 0) {
                visited[next] = visited[cur] + 1;
                q.push(next);
            }
        }
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n >> m;

    for(int i = 1; i <= m; i++) {
        int a, b;
        cin >> a >> b;

        friends[a].push_back(b);
        friends[b].push_back(a);
    }

    BFS(1);

    for(int i = 2; i < n + 1; i++) {
        if(visited[i] < 4 && visited[i] != 0) ans++;
    }
    
    cout << ans << "\n";

    return 0;
}