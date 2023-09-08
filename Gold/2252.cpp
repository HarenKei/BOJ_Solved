#include<bits/stdc++.h>
#define MAX 32001

using namespace std;

int n, m;
vector<int> v[MAX];
vector<int> result;
int inDegree[MAX];
queue<int> q;

void topologySort() {
    for(int i = 1; i <= n; i++) {
        if(inDegree[i] == 0) q.push(i);
    }

    while(!q.empty()) {
        int x = q.front();
        q.pop();
        result.push_back(x);

        for(int i = 0; i < v[x].size(); i++) {
            int y = v[x][i];

            if(--inDegree[y] == 0) {
                q.push(y);
            }

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
        inDegree[b]++;
    }

    topologySort();

    for(int i : result) {
        cout << i << " ";
    }

    return 0;
}
