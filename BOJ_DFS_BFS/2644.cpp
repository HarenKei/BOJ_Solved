#include <bits/stdc++.h>

using namespace std;

vector<int> family[101];
bool visited[101]={false, };
int node, a, b, edge;
queue<int> q;
int depth[101];

int BFS(int start, int end){
    visited[start] = true;
    q.push(start);
    while(!q.empty()){
        int current = q.front();
        q.pop();

        if(current == end){
            return depth[current];
        }else{
            for(int i = 0; i < family[current].size(); i++){
                int next = family[current][i];

                if(!visited[next]){
                    visited[next] = true;
                    q.push(next);
                    depth[next] = depth[current] + 1;
                }
            }

        }
    }
    return -1;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> node >> a >> b >> edge;
    
    for(int i = 0; i < edge; i++){
        int x, y;
        cin >> x >> y;
        family[x].push_back(y);
        family[y].push_back(x);

    }

    int result = BFS(a, b);

    cout << result << '\n';

    return 0;

}