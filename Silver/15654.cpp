#include <bits/stdc++.h>

using namespace std;

int n, m;
vector<int> v;
bool visited[9];
int arr[9];
int idx = 0;

void DFS(int dep){
    //파라미터는 DFS의 깊이다.
    if(dep == m){
        for(int i = 0; i < m; i++){
            cout << arr[i] << " ";
        }
        cout << "\n";

    } else {
        for(int i = 0; i < n; i++){
            if(!visited[i]){
                visited[i] = true;
                arr[dep] = v[i];
                DFS(dep + 1);
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
    
    for(int i = 0; i < n; i++){
        int input;
        cin >> input;
        v.push_back(input);
    }

    sort(v.begin(), v.end());

    DFS(0);

    return 0;
}