#include <bits/stdc++.h>

#define MAX 100001

using namespace std;

int node[MAX];
int visited[MAX] = {-1};
bool finished[MAX];
int t, ans, depth;

void DFS(int vertex) {

    visited[vertex] = depth++;
    int nxt = node[vertex];

    if(visited[nxt] == -1) {
        DFS(nxt);
    } else if(!finished[nxt]) {
        ans += visited[vertex] - visited[nxt] + 1;
    }

    finished[vertex] = true;
}


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        memset(visited, -1, sizeof(visited));
        memset(finished, false, sizeof(finished));
        ans = 0;

        for (int i = 1; i <= n; i++) {
            cin >> node[i];
        }

        for (int i = 1; i <= n; i++) {
            if (visited[i] == -1) {
                DFS(i);

            }
        }

        cout << n - ans << "\n";
    }

    return 0;
}
