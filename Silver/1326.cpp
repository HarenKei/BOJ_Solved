#include <bits/stdc++.h>
#define MAX 10001

using namespace std;

int n, a, b;
vector<int> v(MAX);
vector<int> ans(MAX);
queue<int> q;
bool visited[MAX];

void BFS(int start) {
    q.push(start);
    visited[start] = true;

    while(!q.empty()) {
        int cur = q.front();
        q.pop();

        if(cur == b) return;

        for(int i = cur + v[cur]; i <= n; i += v[cur]) {
            if(!visited[i]) {
                q.push(i);
                visited[i] = true;
                ans[i] = ans[cur] + 1;
            }
        }

        for(int i = cur - v[cur]; i >= 1; i -= v[cur]) {
            if(!visited[i]) {
                q.push(i);
                visited[i] = true;
                ans[i] = ans[cur] + 1;
            }
        }
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n;

    for(int i = 1; i <= n; i++) {
        int input;
        cin >> input;
        v[i] = input;
    }

    cin >> a >> b;

    if(a == b) {
        cout << 0 << "\n";
        return 0;
    }

    BFS(a);

    if(!visited[b]) {
        cout << -1 << "\n";
    } else {
        cout << ans[b] << "\n";
    }

    return 0;
}
