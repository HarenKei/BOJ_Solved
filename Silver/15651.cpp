#include <bits/stdc++.h>

using namespace std;

int n, m;
bool visited[7];
int arr[7];

void DFS(int dep){
    //파라미터는 DFS의 깊이다.
    if(dep == m){
        for(int i = 0; i < m; i++){
            cout << arr[i] << " ";
        }
        cout << "\n";

    } else {
        for(int i = 1; i <= n; i++){
            if(!visited[i]){
                visited[i] = true;
                arr[dep] = i;
                visited[i] = false;
                DFS(dep + 1);
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
    DFS(0);

    return 0;
}