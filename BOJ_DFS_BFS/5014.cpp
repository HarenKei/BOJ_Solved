#include <bits/stdc++.h>
#define MAX 1000001

using namespace std;

int f, s, g, u, d;
int cnt;
bool visited[MAX];
int dir[2];
int dis[MAX];
queue<int> q;


void BFS(int s){
    q.push(s);
    visited[s] = true;

    while(!q.empty()){
        int cur = q.front();
        q.pop();

        for(int i = 0; i < 2; i++){
            int next = cur + dir[i];

            if((next <= f && next > 0) && !visited[next]){
                visited[next] = true;
                q.push(next);
                dis[next] = dis[cur] + 1;
            }
        }
    }

}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    cin >> f >> s >> g >> u >> d;

    dir[0] = u;
    dir[1] = d * (-1);

    BFS(s);

    if(visited[g] == false){
        cout << "use the stairs\n"; 
    } else {
        cout << dis[g] << '\n';
    }

    return 0;
}