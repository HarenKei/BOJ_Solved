#include <bits/stdc++.h>

using namespace std;

int a, b, n, m;
vector<int> node[1001];
int dist[1001];

void BFS() {
    queue<int> q;
    q.push(a);
    dist[a] = 0;

    while(!q.empty()) {
        int cur = q.front();
        q.pop();

        if(cur == b) {
            cout << dist[cur] << "\n";
            return;
        }

        for(int next : node[cur]) {
            if(dist[next] == -1) {
                q.push(next);
                dist[next] = dist[cur] + 1;
            }
        }
    }
    cout << -1 << "\n";

}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    memset(dist, -1, sizeof(dist));

    cin >> a >> b >> n >> m;

    for(int i = 0; i < m; i++) {
        int num1, num2;
        cin >> num1 >> num2;
        node[num1].push_back(num2);
        node[num2].push_back(num1);
    }

    BFS();

    return 0;
} 