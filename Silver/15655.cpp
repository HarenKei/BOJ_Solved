#include <bits/stdc++.h>

using namespace std;

int n, m;
vector<int> v;
bool visited[9];
int arr[9];

void DFS(int dep, int idx){
    if(dep == m){
        for(int i = 0; i < m; i++){
            cout << arr[i] << " ";
        }
        cout << "\n";

    } else {
        for(int i = idx; i < n; i++){
            if(!visited[i]){
                visited[i] = true;
                arr[dep] = v[i];
                DFS(dep + 1, i);
                visited[i] = false;
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

    DFS(0, 0);

    return 0;
}