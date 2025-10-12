#include <bits/stdc++.h>

using namespace std;

int v;
vector<vector<pair<int, int>>> tree;
vector<bool> visited;
vector<int> dis;
void BFS(int u);

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> v;

    // 1_based로 가자
    visited = vector<bool>(v + 1, false);
    dis = vector<int>(v + 1, 0);
    tree = vector<vector<pair<int,int>>>(v + 1);

    for(int i = 0; i < v; i++) {
        int vertex;
        cin >> vertex;
        
        while(true) {
            int u, w;
            cin >> u;
            if(u == -1) break; 
            cin >> w;

            tree[vertex].push_back(make_pair(u, w));
        }
    }

    // 임의의 정점에서 거리가 가장 먼 정점을 찾는다.
    // 여기서 임의의 정점은 1번 정점
    BFS(1);

    
    int maxd = max_element(dis.begin(), dis.end()) - dis.begin();
   
    visited = vector<bool>(v + 1, false);
    dis = vector<int>(v + 1, 0);

    BFS(maxd);

    cout << *max_element(dis.begin(), dis.end()) << "\n";

    return 0;
}

void BFS(int u) {
    queue<int> q;
    visited[u] = true;
    q.push(u);

    while(!q.empty()) {
        int cur = q.front();
            q.pop();
        
        for(auto& nxt : tree[cur]) {
            if(!visited[nxt.first]) {
                visited[nxt.first] = true;
                q.push(nxt.first);
                dis[nxt.first] = dis[cur] + nxt.second;
            }
        }
    }
}