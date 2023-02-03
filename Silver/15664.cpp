#include <bits/stdc++.h>

using namespace std;

int n, m;
vector<int> v;

set<vector<int> > s;
bool visited[9];
int arr[9];

void DFS(int dep, int idx){
    if(dep == m){
        vector<int> tmp;
        for(int i = 0; i < m; i++){
            tmp.push_back(arr[i]);
        }
        s.insert(tmp);
        tmp.clear();
    } else {
        for(int i = idx; i < n; i++){
            if(!visited[i]){
                visited[i] = true;
                arr[dep] = v[i];
                visited[i] = false;
                DFS(dep + 1, i + 1);
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

    for(auto i : s){
        for(auto j : i){
            cout << j << " ";
        }
        cout << "\n";
    }

    return 0;
}