#include <bits/stdc++.h>

using namespace std;

vector<int> node[101];
bool visit[101];
int cnt = 0, com = 0;

void DFS(int num){
    visit[num] = true;

    for(int i = 0; i < node[num].size(); i++){
        int a = node[num][i];
        if(!visit[a]){
            DFS(a);
            cnt++;
        }
    }
}



int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int pair = 0;
    cin >> com >> pair;
    for(int i = 0; i < pair; ++i){
        int x = 0, y = 0;
        cin >> x >> y;

        node[x].push_back(y);
        node[y].push_back(x);
    }

    DFS(1);

    cout << cnt;

    return 0;
} 