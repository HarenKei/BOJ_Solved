#include <bits/stdc++.h>

using namespace std;

int n;
vector<int> vec;
bool visited[9];
int arr[9];

void DFS(int dep){
    if(dep == n){
        for(int i = 0; i < n; i++){
            cout << arr[i] << " ";
        }
        cout << "\n";
    } else {
        for(int i = 0; i < n; i++){
            if(!visited[i]){
                visited[i] = true;
                arr[dep] = vec[i];
                DFS(dep + 1);
                visited[i] = false;
            }
        }
    }


}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    
    cin >> n;

    for(int i = 1; i <= n; i++){
        vec.push_back(i);
    }

    DFS(0);


    return 0;
}