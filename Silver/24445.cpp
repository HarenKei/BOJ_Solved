#include <bits/stdc++.h>
#define MAX 100001

using namespace std;

queue<int> q;
bool visited[MAX];
vector<int> node[MAX];
int result[MAX];
int cnt = 0;

bool cmp(int a, int b){
    return b < a;
}

void BFS(int start){
    visited[start] = true;
    q.push(start);
    cnt++;
    result[start] = cnt;

    while(!q.empty()){
        int cur = q.front();
        q.pop();

        for(int i = 0; i < node[cur].size(); i++){
            int temp = node[cur][i];
            if(!visited[temp]){
                cnt++;
                result[temp] = cnt;
                visited[temp] = true;
                q.push(temp);
                
            }
        }
    }

}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, m, r;
    cin >> n >> m >> r;

    for(int i = 1; i <= m; i++){
        int u = 0, v = 0;
        cin >> u >> v;
        node[u].push_back(v);
        node[v].push_back(u);
        //양방향 간선 구현
    }

    for(int i = 1; i <= n; i++){
        sort(node[i].begin(), node[i].end(), cmp);
        //오름차순 탐색을 위한 정렬.
    }

    BFS(r);

    for(int i = 1; i <= n; i++){
        cout << result[i] << "\n";
    }

    return 0;
}