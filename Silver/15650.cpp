#include <bits/stdc++.h>

using namespace std;

int n, m;
bool visited[9];
int arr[9];

void DFS(int dep, int idx){
    //파라미터는 DFS의 깊이다.
    if(dep == m){
        for(int i = 0; i < m; i++){
            cout << arr[i] << " ";
        }
        cout << "\n";

    } else {
        for(int i = idx; i <= n; i++){
            if(!visited[i]){
                visited[i] = true;
                arr[dep] = i;
                DFS(dep + 1, i + 1);
                visited[i] = false;
                //다음 경우의 수를 위해 방문 여부를 false로 변경한다.
            } 
        }
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n >> m;
    DFS(0, 1);

    return 0;
}