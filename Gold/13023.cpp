#include<bits/stdc++.h>

using namespace std;

int n, m;
bool visited[2001];
vector<int> v[2001];
bool chk;

void DFS(int start, int depth) {
    if(depth == 4) {
        chk = true;
        return;
    }

    for(int i = 0; i < v[start].size(); i++) {
        int nxt = v[start][i];

        if(!visited[nxt]) {
            visited[nxt] = true;
            DFS(nxt, depth + 1);
            visited[nxt] = false;
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> n >> m;

    for(int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;
        v[a].push_back(b);
        v[b].push_back(a);
    }

    for(int i = 0; i < n; i++) {
        visited[i] = true;
        DFS(i, 0);
        visited[i] = false;

        if(chk) break;
    }

    cout << chk << "\n";

    return 0;
}
