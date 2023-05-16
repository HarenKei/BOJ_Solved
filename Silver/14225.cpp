#include <bits/stdc++.h>

using namespace std;

int n;
int arr[21];
bool visited[20 * 100000];
vector<int> v;


void DFS(int dep, int sum) {
  visited[sum] = true;

  if(dep == n) return;
  else {
    DFS(dep + 1, sum);
    DFS(dep + 1, sum + v[dep]);
  }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n;

    for(int i = 0; i < n; i++) {
        int input;
        cin >> input;
        v.push_back(input);
    }

    DFS(0, 0);
    
    int ans = 1;
    while(visited[ans]) ans++;
    cout << ans << endl;

    return 0;
}