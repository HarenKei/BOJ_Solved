#include <bits/stdc++.h>
#define MAX 10001

using namespace std;

int n, m, cnt = 1;
vector<int> MAP[MAX];
vector<pair<int, int> > result;
vector<int> ans;
bool visited[MAX];
queue<int> q;

void BFS(int start) {
    visited[start] = true;
    q.push(start);

    while(!q.empty()) {
        int cur = q.front();
        q.pop();

        for(int i = 0; i < MAP[cur].size(); i++) {
            int next = MAP[cur][i];

            if(!visited[next]) {
                visited[next] = true;
                q.push(next);
                cnt++;
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
        MAP[b].push_back(a);
    }

    for(int i = 1; i <= n; i++) {
        BFS(i);
        memset(visited, false, sizeof(visited));
        result.push_back(make_pair(i, cnt));
        cnt = 1;
    }

    int max = -1;

    for(auto it = result.begin(); it != result.end(); it++) {
        if(max < it->second) {
            max = it->second;
        }
    }

    for(auto it = result.begin(); it != result.end(); it++) {
        if(max == it->second) {
            ans.push_back(it->first);
        }
    }

    for(auto it = ans.begin(); it != ans.end(); it++) {
        cout << *it << " ";
    }

    cout << "\n";



    return 0;
}