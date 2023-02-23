#include <bits/stdc++.h>
#define MAX 200000

using namespace std;

int n, m, r; //정점 수, 간선 수, 시작 정점
vector<int> node[MAX];
bool visited[MAX];
int result[MAX];
int cnt = 0;

bool cmp(int a, int b){
    return b < a;
}

void DFS(int dep){
    if(visited[dep]) return;
    else{
        visited[dep] = true;
        cnt++;
        result[dep] = cnt;
    }

    for(int i = 0; i < node[dep].size(); i++){
        DFS(node[dep][i]);
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n >> m >> r;

    for(int i = 0; i < m; i++){
        int u = 0, v = 0;
        cin >> u >> v;

        node[u].push_back(v);
        node[v].push_back(u);
        //양방향 간선 구현
    }

    for(int i = 1; i <= n; i++){
        sort(node[i].begin(), node[i].end(), cmp);
        //오름차순으로 탐색하기 위한 정렬
    }

    DFS(r);

    for(int i = 1; i <= n; i++){
        cout << result[i] << "\n";
    }

    return 0;
}