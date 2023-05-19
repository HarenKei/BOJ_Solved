#include <bits/stdc++.h>
#define MAX 30001

using namespace std;

int n, m, ans;
vector<int> city[MAX];
bool visited[MAX];
queue<int> q;

void BFS(int start) {
    visited[start] = true;
    q.push(start);

    while(!q.empty()) {
        int cur = q.front();
        q.pop();

        for(int i = 0; i < city[cur].size(); i++) {
            int next = city[cur][i];
            if(!visited[next]) {
                visited[next] = true;
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

    for(int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;
        city[a].push_back(b);
        city[b].push_back(a);
    }

    for(int i = 1; i <= n; i++) {
        if(!visited[i]) {
            BFS(i);
            ans++;
        }
    }

    cout << ans - 1 << "\n";

    return 0;
}