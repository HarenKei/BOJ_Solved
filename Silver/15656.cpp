#include <bits/stdc++.h>

using namespace std;

int n, m;
vector<int> v;
bool visited[8];
int arr[8];

void DFS(int dep){
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
                visited[i] = false;
                DFS(dep + 1);
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