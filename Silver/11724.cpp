#include <bits/stdc++.h>

using namespace std;

vector<int> graph[1001];
bool visited[1001];
queue<int> q;

void BFS(int start){
    visited[start] = true;
    q.push(start);

    while(!q.empty()){
        int cur = q.front();
        q.pop();

        for(int i = 0; i < graph[cur].size(); i++){
            if(!visited[graph[cur][i]]){
                visited[graph[cur][i]] = true;
                q.push(graph[cur][i]);
            }
        }
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, m, cnt = 0;
    cin >> n >> m;

    for(int i = 0; i < m; i++){
        int u, v;
        cin >> u >> v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }

    for(int i = 1; i <= n; i++){
        if(!visited[i]){
            BFS(i);
            cnt++;
        }
    }

    cout << cnt << "\n";

    return 0;
}