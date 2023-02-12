#include <bits/stdc++.h>

using namespace std;

vector<int> v;
int n, s, cnt;

void DFS(int len, int sum){
    if(len == n) return;
    if(sum + v[len] == s) cnt++;

    DFS(len + 1, sum);
    DFS(len + 1, sum + v[len]);
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n >> s;
    
    for(int i = 0; i < n; i++){
        int input;
        cin >> input;
        v.push_back(input);
    }

    DFS(0, 0);

    cout << cnt << "\n";

    return 0;
}