#include <bits/stdc++.h>

using namespace std;

bool visited[1001];
vector<int> node[1001];


void DFS(int start){
    visited[start] = true;
    cout << start << " ";
    
    for(int i = 0; i < node[start].size(); i++){
        int a = node[start][i];
        if(!visited[a]){
            DFS(a);
        }
    }
}

void BFS(int start){
   queue<int> q;
   q.push(start);
   visited[start] = true;

   while(!q.empty()){
        int crt = q.front();
        q.pop();
        cout << crt << " ";

        for(int i = 0; i < node[crt].size(); i++){
            int b = node[crt][i];
            if(!visited[b]){
                visited[b] = true;
                q.push(b);
            }
        }
   }
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int nodeCnt, edge, start;
    cin >> nodeCnt >> edge >> start;

    for(int i = 0; i < edge; i++){
        int a = 0, b = 0;
        cin >> a >> b;
        node[a].push_back(b);
        node[b].push_back(a);
    }

    for(int i = 1; i <= nodeCnt; i++){
        sort(node[i].begin(), node[i].end());
    }

    DFS(start);
    cout << '\n';
    memset(visited, false, sizeof(visited));
    BFS(start);
}