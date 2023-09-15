#include <bits/stdc++.h>
#define MAX 1001

using namespace std;

int n, m;
vector<int> MAP[MAX];
int inDegree[MAX]; //진입차수
int result[MAX];

void topologySort() {
    queue<int> q;
    for(int i = 1; i <= n; i++) {
        if(inDegree[i] == 0) q.push(i);
        result[i] = 1;
    }

    while(!q.empty()) {
        int x = q.front();
        q.pop();


        for(int i = 0; i < MAP[x].size(); i++) {
            int y = MAP[x][i];

            if(--inDegree[y] == 0) {
                q.push(y);
                result[y] = max(result[y], result[x] + 1);
            }
        }
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> n >> m;

    for(int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;
        MAP[a].push_back(b);
        inDegree[b]++;
    }

    topologySort();

    for(int i = 1; i <= n; i++) {
        cout << result[i] << " ";
    }
    cout << "\n";

    return 0;
}
